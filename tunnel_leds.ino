#define FASTLED_ALLOW_INTERRUPTS 0
#include "FastLED.h"

FASTLED_USING_NAMESPACE

// Collection of animations for tunnel slide.
// Based of Mark Kriegsman's "100-lines-of-code" demo reel.
// Refactored to add in many other animations by Mark.
// Also includes animations by Andrew Tuline and some general
// setup work by Jason Coon.

#if FASTLED_VERSION < 3001000
#error "Requires FastLED 3.1 or later; check github for latest code."
#endif

#define DATA_PIN    2
#define DATA_PIN_2  3
#define DATA_PIN_3  4
//#define CLK_PIN   4
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB // My current strand is weird
#define NUM_LEDS    75

// Set up leds
CRGB leds[NUM_LEDS];
CRGB leds2[NUM_LEDS];
CRGB leds3[NUM_LEDS];
CRGB leds4[NUM_LEDS];

//Global Palettes
CRGBPalette16 thisPalette;
CRGBPalette16 thatPalette;
CRGBPalette16 targetPalette( PartyColors_p );
CRGBPalette16 currentPalette( PartyColors_p );

TBlendType    currentBlending;        // NOBLEND or LINEARBLEND

// Palette knife sourced palletes (so shiny!)
#include "GradientPalettes.h"

// Forward declarations of gradient palettes, and a count of how many there are.
// The actual color palette definitions are in GradientPalettes.h.
extern const TProgmemRGBGradientPalettePtr gGradientPalettes[];
uint8_t gCurrentPaletteNumber = 0;

// ten seconds per color palette makes a good demo
// 20-120 is better for deployment
uint8_t secondsPerPalette = 25;

int pixelnumber = 0;
// TODO(change this to particles to make generic)
uint8_t noise_arr[NUM_LEDS];
static uint32_t x;
static uint32_t y;
static uint32_t z;

#define BRIGHTNESS 255
int FRAMES_PER_SECOND = 20;

void setup() {  
  // tell FastLED about the LED strip configuration
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds2, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,DATA_PIN_2,COLOR_ORDER>(leds4, NUM_LEDS).setCorrection(TypicalLEDStrip); // Pin 2 is led array 4 for additional delay
  FastLED.addLeds<LED_TYPE,DATA_PIN_3,COLOR_ORDER>(leds3, NUM_LEDS).setCorrection(TypicalLEDStrip); // Cause why not?

  FastLED.setDither(true);
  FastLED.setCorrection(TypicalLEDStrip);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 1000);
  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);

  // Set up palettes
  thisPalette = RainbowColors_p;
  thatPalette = RainbowColors_p;
  currentBlending = LINEARBLEND;

  // Set up debug
  Serial.begin(115200);
  Serial.println("Starting.");
}

/*
 * Patterns
 */
uint16_t pattern_cycle_time = 20;
// List of patterns to cycle through.  Each is defined as a separate function below.
typedef void (*SimplePatternList[])();

// Removed colortwinkles since it seems to have a memory leakage problem
//removed fire
SimplePatternList gPatterns = {sinusoid, fire, colortwinkles, pacifica_loop, colorwaves,
                               palette_fill, juggle_w_palette,
                               sinelon, juggle, ripple,
                               two_sin, randomparticle,
                               rainbow, rainbowWithGlitter, pride, confetti};
uint8_t gCurrentPatternNumber = 0;
bool pattern_change = true;

// Color variables
CRGB newcolor;
uint8_t gHue = 0; // rotating "base color" used by many of the patterns

void loop()
{
  // Move led strips back (time == distance)
  memcpy(leds4, leds3, NUM_LEDS * sizeof(CRGB));
  memcpy(leds3, leds2, NUM_LEDS * sizeof(CRGB));
  //memcpy(leds2, leds, NUM_LEDS * sizeof(CRGB));

  // Blend strips
  blendStrip(leds2, leds, 128); // Leds is fast, led2 is displayed and slightly blured
  
  // Call the current pattern function once, updating the 'leds' array
  gPatterns[gCurrentPatternNumber]();
  
  // send the 'leds' array out to the actual LED strip
  FastLED.show();  
  // insert a delay to keep the framerate modest
  FastLED.delay(1000/FRAMES_PER_SECOND); 

  // do some periodic updates
  EVERY_N_MILLISECONDS( 20 ) { gHue++; } // slowly cycle the "base color" through the rainbow
  EVERY_N_SECONDS( pattern_cycle_time ) { nextPattern(); } // change patterns periodically
  EVERY_N_SECONDS( secondsPerPalette ) {
    gCurrentPaletteNumber = addmod8( gCurrentPaletteNumber, 1, gGradientPaletteCount);
    targetPalette = gGradientPalettes[ gCurrentPaletteNumber ];
  }
  ChangePalettes();
  uint8_t maxChanges = 24; 
  nblendPaletteTowardPalette( currentPalette, targetPalette, maxChanges);
  if (pattern_change){
    //Serial.println("New pattern!");
    //Serial.println(gCurrentPatternNumber);
    pattern_change = false;
  }
}

/*
 * Full Strip Blend
 * Used to interpolate between frames to slow patterns 
*/

// Helper function that blends one uint8_t toward another by a given amount
void nblendU8TowardU8( uint8_t& cur, const uint8_t target, uint8_t amount)
{
  if( cur == target) return;
  
  if( cur < target ) {
    uint8_t delta = target - cur;
    delta = scale8_video( delta, amount);
    cur += delta;
  } else {
    uint8_t delta = cur - target;
    delta = scale8_video( delta, amount);
    cur -= delta;
  }
}

// Blend one CRGB color toward another CRGB color by a given amount.
// Blending is linear, and done in the RGB color space.
// This function modifies 'cur' in place.
CRGB fadeTowardColor( CRGB& cur, const CRGB& target, uint8_t amount)
{
  nblendU8TowardU8( cur.red,   target.red,   amount);
  nblendU8TowardU8( cur.green, target.green, amount);
  nblendU8TowardU8( cur.blue,  target.blue,  amount);
  return cur;
}

void blendStrip(CRGB* curStrip, CRGB* targetStrip, uint8_t fadeAmount)
{
  for( uint16_t i = 0; i < NUM_LEDS; i++) {
    fadeTowardColor( curStrip[i], targetStrip[i], fadeAmount);
  }
}

#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))

void nextPattern()
{
  // add one to the current pattern number, and wrap around at the end
  gCurrentPatternNumber = (gCurrentPatternNumber + 1) % ARRAY_SIZE( gPatterns);
  pattern_change = true;
}

void rainbow() 
{
  FRAMES_PER_SECOND = 1000; // ?
  // FastLED's built-in rainbow generator
  fill_rainbow( leds, NUM_LEDS, gHue, 7);
}

void rainbowWithGlitter() 
{
  FRAMES_PER_SECOND = 1000;
  // built-in FastLED rainbow, plus some random sparkly glitter
  rainbow();
  addGlitter(80);
}

void addGlitter( fract8 chanceOfGlitter) 
{
  if( random8() < chanceOfGlitter) {
    leds[ random16(NUM_LEDS) ] += CRGB::White;
  }
}

void confetti() 
{
  FRAMES_PER_SECOND = 120;
  // random colored speckles that blink in and fade smoothly
  fadeToBlackBy( leds, NUM_LEDS, 10);
  int pos = random16(NUM_LEDS);
  leds[pos] += CHSV( gHue + random8(64), 200, 255);
}

void sinelon()
{
  FRAMES_PER_SECOND = 1000;
  // a colored dot sweeping back and forth, with fading trails
  fadeToBlackBy( leds, NUM_LEDS, 1);
  int pos = beatsin16(8,0,NUM_LEDS);
  //leds[pos] += CHSV( gHue, 255, 192);
  leds[pos] = ColorFromPalette(currentPalette, gHue, 255);
  // Add a second dot to ensure some color is shown
  leds[(pos+(NUM_LEDS/2))%NUM_LEDS] = ColorFromPalette(currentPalette, gHue+128, 255);
}

void juggle() {
  FRAMES_PER_SECOND = 1000;
  // eight colored dots, weaving in and out of sync with each other
  fadeToBlackBy( leds, NUM_LEDS, 20);
  byte dothue = 0;
  for( int i = 0; i < 8; i++) {
    leds[beatsin16(i+7,0,NUM_LEDS)] |= CHSV(dothue, 200, 255);
    dothue += 32;
  }
}

void juggle_w_palette() {
  FRAMES_PER_SECOND = 1000;
  // eight colored dots, weaving in and out of sync with each other
  fadeToBlackBy( leds, NUM_LEDS, 20);
  byte dothue = 0;
  for( int i = 0; i < 8; i++) {
    leds[beatsin16(i+7,0,NUM_LEDS)] = ColorFromPalette(currentPalette, gHue+32*i, 255);
  }
}
/*
 * Fire animation. Stolen from Mark.
 */
 
// COOLING: How much does the air cool as it rises?
// Less cooling = taller flames.  More cooling = shorter flames.
// Default 50, suggested range 20-100 
#define COOLING  50

// SPARKING: What chance (out of 255) is there that a new spark will be lit?
// Higher chance = more roaring fire.  Lower chance = more flickery fire.
// Default 120, suggested range 50-200.
#define SPARKING 95

void fire()
{
  // Array of temperature readings at each simulation cell for fire animation
  static byte heat[int round(NUM_LEDS/2.0)];
  FRAMES_PER_SECOND = 40;

  // Step 1.  Cool down every cell a little
    for( int i = 0; i < NUM_LEDS; i++) {
      heat[i] = qsub8( heat[i],  random8(0, ((COOLING * 10) / NUM_LEDS) + 2));
    }
  
    // Step 2.  Heat from each cell drifts 'up' and diffuses a little
    for( int k= ARRAY_SIZE(heat) - 1; k >= 2; k--) {
      heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2] ) / 3; 
    }
    
    // Step 3.  Randomly ignite new 'sparks' of heat near the bottom
    if( random8() < SPARKING ) {
      int y = random8(ARRAY_SIZE(heat)/10);
      heat[y] = qadd8( heat[y], random8(0,45) );
    }
 
    // Step 4.  Map from heat cells to LED colors
    for( int j = 0; j < ARRAY_SIZE(heat); j++) {
      //CRGB color = ColorFromPalette((CRGBPalette16) German_flag_smooth_gp, heat[j], 255);
      CRGB color = HeatColor( heat[j]);
      leds[j] = color;
      leds[(NUM_LEDS-1) - j] = color; // invert for tunnel effect
    }
}

void randomparticle() {
  FRAMES_PER_SECOND = 20;
  static byte particle[NUM_LEDS];
  
  // Add new particle
  int y = random8(NUM_LEDS);
  CRGB color = CHSV(random8(255),255,192);
  leds[y] += color;

  // Fade entire strand 20%
  fadeToBlackBy( leds, NUM_LEDS, 20);
}


int center = 0;                                               // Center of the current ripple.
int step = -1;                                                // -1 is the initializing step.
uint8_t myfade = 255;                                         // Starting brightness.
#define maxsteps 16                                           // Case statement wouldn't allow a variable.


void ripple() {
  FRAMES_PER_SECOND = 60;
  fadeToBlackBy(leds, NUM_LEDS, 5);
  switch (step) {

    case -1:                                                          // Initialize ripple variables.
      center = random(NUM_LEDS);
      gHue = random8();
      
      step = 0;
      break;

    case 0:
      //leds[center] = CHSV(gHue, 255, 255);                          // Display the first pixel of the ripple.
      leds[center] = ColorFromPalette(currentPalette, gHue, 255);
      step ++;
      break;

    case maxsteps:                                                    // At the end of the ripples.
      step = -1;
      break;

    default:                                                             // Middle of the ripples.
      leds[(center + step + NUM_LEDS) % NUM_LEDS] = ColorFromPalette(currentPalette, gHue, myfade/step*2);       // Simple wrap from Marc Miller
      leds[(center - step + NUM_LEDS) % NUM_LEDS] = ColorFromPalette(currentPalette, gHue, myfade/step*2);
      step ++;                                                         // Next step.
      break;  
  } // switch step
}




/*
 * Two Sin
 */

#define qsubd(x, b)  ((x>b)?wavebright:0)                     // A digital unsigned subtraction macro. if result <0, then => 0. Otherwise, take on fixed value.
#define qsuba(x, b)  ((x>b)?x-b:0)                            // Unsigned subtraction macro. if result <0, then => 0

// unsigned long previousMillis;                                 // Store last time the strip was updated.

// Most of these variables can be mucked around with. Better yet, add some form of variable input or routine to change them on the fly. 1970's here I come. . 
//

uint8_t brightness = 128;

uint8_t wavebright = 128;                                     // You can change the brightness of the waves/bars rolling across the screen. Best to make them not as bright as the sparkles.
uint8_t thishue = 0;                                          // You can change the starting hue value for the first wave.
uint8_t thathue = 140;                                        // You can change the starting hue for other wave.
uint8_t thisrot = 1;                                          // You can change how quickly the hue rotates for this wave. Currently 0.
uint8_t thatrot = 1;                                          // You can change how quickly the hue rotates for the other wave. Currently 0.
uint8_t allsat = 255;                                         // I like 'em fully saturated with colour.
uint8_t thisdir = 0;
uint8_t thatdir = 0;
uint8_t alldir = 0;                                           // You can change direction.
int8_t thisspeed = 4;                                         // You can change the speed.
int8_t thatspeed = 4;                                         // You can change the speed.
uint8_t allfreq = 32;                                         // You can change the frequency, thus overall width of bars.
int thisphase = 0;                                            // Phase change value gets calculated.
int thatphase = 0;                                            // Phase change value gets calculated.
uint8_t thiscutoff = 192;                                     // You can change the cutoff value to display this wave. Lower value = longer wave.
uint8_t thatcutoff = 192;                                     // You can change the cutoff value to display that wave. Lower value = longer wave.
int thisdelay = 20;

uint8_t fadeval = 192;

void two_sin() {
  FRAMES_PER_SECOND = 1000; // Full speed. Controlled by real time.
  //  if (alldir == 0) {thisphase+=thisspeed; thatphase+=thatspeed;}        // You can change direction.
  //  else {thisphase-=thisspeed; thatphase-=thatspeed;}                    // You can have individual speeds.

  thisdir ? thisphase += beatsin8(thisspeed, 2, 10) : thisphase -= beatsin8(thisspeed, 2, 10);
  thatdir ? thatphase += beatsin8(thisspeed, 2, 10) : thatphase -= beatsin8(thatspeed, 2, 10);
  thatphase += beatsin8(thatspeed, 2, 10);
  thishue += thisrot;                                        // Hue rotation is fun for thiswave.
  thathue += thatrot;                                        // It's also fun for thatwave.
  
  for (int k=0; k<NUM_LEDS-1; k++) {
    int thisbright = qsuba(cubicwave8((k*allfreq)+thisphase), thiscutoff);      // qsub sets a minimum value called thiscutoff. If < thiscutoff, then bright = 0. Otherwise, bright = 128 (as defined in qsub)..
    int thatbright = qsuba(cubicwave8((k*allfreq)+128+thatphase), thatcutoff);  // This wave is 180 degrees out of phase (with the value of 128).

    leds[k] = ColorFromPalette(thisPalette, thishue, thisbright, currentBlending);
    leds[k] += ColorFromPalette(thatPalette, thathue, thatbright, currentBlending);
  }
     nscale8(leds,NUM_LEDS,fadeval);
}

void ChangePalettes() {
  uint8_t secondHand = (millis() / 1000) % 60;                // Increase this if you want a longer demo.
  static uint8_t lastSecond = 99;                             // Static variable, means it's only defined once. This is our 'debounce' variable.
  if( lastSecond != secondHand) {
    lastSecond = secondHand;
    switch (secondHand) {
      case  0: thisrot = 1; thatrot = 1; thisPalette=PartyColors_p; thatPalette=PartyColors_p; break;
      case  5: thisrot = 0; thatdir = 1; thatspeed = -4; thisPalette=ForestColors_p; thatPalette=OceanColors_p; break;
      case 10: thatrot = 0; thisPalette=PartyColors_p; thatPalette=RainbowColors_p; break;
      case 15: allfreq = 16; thisdir = 1; thathue = 128; break;
      case 20: thiscutoff = 96; thatcutoff = 240; break;
      case 25: thiscutoff = 96; thatdir = 0; thatcutoff = 96; thisrot = 1; break;
      case 30: thisspeed= -4; thisdir = 0; thatspeed= -4; break;
      case 35: thiscutoff = 128; thatcutoff = 128; wavebright = 64; break;
      case 40: wavebright = 128; thisspeed = 3; break;
      case 45: thisspeed = 3; thatspeed = -3; break;
      case 50: thisspeed = 2; thatcutoff = 96; thiscutoff = 224; thatspeed = 3; break;
      case 55: resetvar(); break;
      case 60: break;
    }
  }
}


void resetvar() {                   // Reset the variable back to the beginning.
  wavebright = 128;                    // You can change the brightness of the waves/bars rolling across the screen. Best to make them not as bright as the sparkles.
  thishue = 0;                         // You can change the starting hue value for the first wave.
  thathue = 140;                       // You can change the starting hue for other wave.
  thisrot = 0;                         // You can change how quickly the hue rotates for this wave. Currently 0.
  thatrot = 0;                         // You can change how quickly the hue rotates for the other wave. Currently 0.
  allsat = 255;                        // I like 'em fully saturated with colour.
  thisspeed = 4;                       // You can change the speed, and use negative values.
  thatspeed = 4;                       // You can change the speed, and use negative values.
  allfreq = 32;                        // You can change the frequency, thus overall width of bars.
  thisphase = 0;                       // Phase change value gets calculated.
  thatphase = 0;                       // Phase change value gets calculated.
  thiscutoff = 192;                    // You can change the cutoff value to display this wave. Lower value = longer wave.
  thatcutoff = 192;                    // You can change the cutoff value to display that wave. Lower value = longer wave.
  thisdelay = 10;                      // You can change the delay. Also you can change the allspeed variable above. 
  thisdir = 0;
  thatdir = 0;
} // resetvar()

void palette_fill()
{
  FRAMES_PER_SECOND = 120;
  static uint8_t startindex = 0;
  startindex--;
  fill_palette( leds, NUM_LEDS, startindex, (256 / NUM_LEDS) + 1, currentPalette, 255, LINEARBLEND);
}

void pride() 
{
  FRAMES_PER_SECOND = 1000; //Animation controlled by external clock
  static uint16_t sPseudotime = 0;
  static uint16_t sLastMillis = 0;
  static uint16_t sHue16 = 0;
 
  uint8_t sat8 = beatsin88( 87, 220, 250);
  uint8_t brightdepth = beatsin88( 341, 96, 224);
  uint16_t brightnessthetainc16 = beatsin88( 203, (25 * 256), (40 * 256));
  uint8_t msmultiplier = beatsin88(147, 23, 60);

  uint16_t hue16 = sHue16;//gHue * 256;
  uint16_t hueinc16 = beatsin88(113, 1, 3000);
  
  uint16_t ms = millis();
  uint16_t deltams = ms - sLastMillis ;
  sLastMillis  = ms;
  sPseudotime += deltams * msmultiplier;
  sHue16 += deltams * beatsin88( 400, 5,9);
  uint16_t brightnesstheta16 = sPseudotime;
  
  for( uint16_t i = 0 ; i < NUM_LEDS; i++) {
    hue16 += hueinc16;
    uint8_t hue8 = hue16 / 256;

    brightnesstheta16  += brightnessthetainc16;
    uint16_t b16 = sin16( brightnesstheta16  ) + 32768;

    uint16_t bri16 = (uint32_t)((uint32_t)b16 * (uint32_t)b16) / 65536;
    uint8_t bri8 = (uint32_t)(((uint32_t)bri16) * brightdepth) / 65536;
    bri8 += (255 - brightdepth);
    
    newcolor = CHSV( hue8, sat8, bri8);
    
    uint16_t pixelnumber = i;
    pixelnumber = (NUM_LEDS-1) - pixelnumber;
    
    nblend( leds[pixelnumber], newcolor, 64);
  }
}

// ColorWavesWithPalettes by Mark Kriegsman: https://gist.github.com/kriegsman/8281905786e8b2632aeb
// This function draws color waves with an ever-changing,
// widely-varying set of parameters, using a color palette.
void colorwaves()
{
  FRAMES_PER_SECOND = 1000;
  static uint16_t sPseudotime = 0;
  static uint16_t sLastMillis = 0;
  static uint16_t sHue16 = 0;

  // uint8_t sat8 = beatsin88( 87, 220, 250);
  uint8_t brightdepth = beatsin88( 341, 96, 224);
  uint16_t brightnessthetainc16 = beatsin88( 203, (25 * 256), (40 * 256));
  uint8_t msmultiplier = beatsin88(147, 23, 60);

  uint16_t hue16 = sHue16;//gHue * 256;
  uint16_t hueinc16 = beatsin88(113, 300, 1500);

  uint16_t ms = millis();
  uint16_t deltams = ms - sLastMillis ;
  sLastMillis  = ms;
  sPseudotime += deltams * msmultiplier;
  sHue16 += deltams * beatsin88( 400, 5, 9);
  uint16_t brightnesstheta16 = sPseudotime;

  for ( uint16_t i = 0 ; i < NUM_LEDS; i++) {
    hue16 += hueinc16;
    uint8_t hue8 = hue16 / 256;
    uint16_t h16_128 = hue16 >> 7;
    if ( h16_128 & 0x100) {
      hue8 = 255 - (h16_128 >> 1);
    } else {
      hue8 = h16_128 >> 1;
    }

    brightnesstheta16  += brightnessthetainc16;
    uint16_t b16 = sin16( brightnesstheta16  ) + 32768;

    uint16_t bri16 = (uint32_t)((uint32_t)b16 * (uint32_t)b16) / 65536;
    uint8_t bri8 = (uint32_t)(((uint32_t)bri16) * brightdepth) / 65536;
    bri8 += (255 - brightdepth);

    gHue = hue8;
    //gHue = triwave8( index);
    gHue = scale8( gHue, 240);

    CRGB newcolor = ColorFromPalette( currentPalette, gHue, bri8);

    uint16_t pixelnumber = i;
    pixelnumber = (NUM_LEDS - 1) - pixelnumber;

    nblend( leds[pixelnumber], newcolor, 128);
  }
}

// Insert new patterns here

// Sinusoid3
// StefanPetrick
float speed = 0.3; // speed of the movement along the Lissajous curves
float size = 3;    // amplitude of the curves
uint8_t Width = NUM_LEDS;

void sinusoid(){
  FRAMES_PER_SECOND = 1000;
  for (uint8_t x = 0; x < Width; x++) {
    float cx = float(size * (sinf (float(speed * 0.003 * float(millis() ))) ) ) - 8;  // the 8 centers the middle on a 16x16
    float cy = x + float(size * (cosf (float(speed * 0.0022 * float(millis()))) ) ) - 8;
    float v = 127 * (1 + sinf ( sqrtf ( ((cx * cx) + (cy * cy)) ) ));
    uint8_t data = v;
    leds[x].r = data;
    
    cx = x + float(size * (sinf (speed * float(0.0021 * float(millis()))) ) ) - 8;
    cy = float(size * (cosf (speed * float(0.002 * float(millis() ))) ) ) - 8;
    v = 127 * (1 + sinf ( sqrtf ( ((cx * cx) + (cy * cy)) ) ));
    data = v;
    leds[x].b = data;
    
    cx = x + float(size * (sinf (speed * float(0.0041 * float(millis() ))) ) ) - 8;
    cy = float(size * (cosf (speed * float(0.0052 * float(millis() ))) ) ) - 8;
    v = 127 * (1 + sinf ( sqrtf ( ((cx * cx) + (cy * cy)) ) ));
    data = v;
    leds[x].b = data;
  }
}


// Color twinkles
#define STARTING_BRIGHTNESS 64
#define FADE_IN_SPEED       32
#define FADE_OUT_SPEED      20
#define DENSITY            255

enum { GETTING_DARKER = 0, GETTING_BRIGHTER = 1 };

void colortwinkles()
{
  FRAMES_PER_SECOND = 120;
  // Make each pixel brighter or darker, depending on
  // its 'direction' flag.
  brightenOrDarkenEachPixel( FADE_IN_SPEED, FADE_OUT_SPEED);
  
  // Now consider adding a new random twinkle
  if( random8() < DENSITY ) {
    int pos = random16(NUM_LEDS);
    if( !leds[pos]) {
      leds[pos] = ColorFromPalette( currentPalette, random8(), STARTING_BRIGHTNESS, NOBLEND);
      setPixelDirection(pos, GETTING_BRIGHTER);
    }
  }
}

void brightenOrDarkenEachPixel( fract8 fadeUpAmount, fract8 fadeDownAmount)
{
 for( uint16_t i = 0; i < NUM_LEDS; i++) {
    if( getPixelDirection(i) == GETTING_DARKER) {
      // This pixel is getting darker
      leds[i] = makeDarker( leds[i], fadeDownAmount);
    } else {
      // This pixel is getting brighter
      leds[i] = makeBrighter( leds[i], fadeUpAmount);
      // now check to see if we've maxxed out the brightness
      if( leds[i].r == 255 || leds[i].g == 255 || leds[i].b == 255) {
        // if so, turn around and start getting darker
        setPixelDirection(i, GETTING_DARKER);
      }
    }
  }
}

CRGB makeBrighter( const CRGB& color, fract8 howMuchBrighter) 
{
  CRGB incrementalColor = color;
  incrementalColor.nscale8( howMuchBrighter);
  return color + incrementalColor;
}

CRGB makeDarker( const CRGB& color, fract8 howMuchDarker) 
{
  CRGB newcolor = color;
  newcolor.nscale8( 255 - howMuchDarker);
  return newcolor;
}


// For illustration purposes, there are two separate implementations
// provided here for the array of 'directionFlags': 
// - a simple one, which uses one byte (8 bits) of RAM for each pixel, and
// - a compact one, which uses just one BIT of RAM for each pixel.

// Set this to 1 or 8 to select which implementation
// of directionFlags is used.  1=more compact, 8=simpler.
#define BITS_PER_DIRECTION_FLAG 1


#if BITS_PER_DIRECTION_FLAG == 8
// Simple implementation of the directionFlags array,
// which takes up one byte (eight bits) per pixel.
uint8_t directionFlags[NUM_LEDS];

bool getPixelDirection( uint16_t i) {
  return directionFlags[i];
}

void setPixelDirection( uint16_t i, bool dir) {
  directionFlags[i] = dir;
}
#endif


#if BITS_PER_DIRECTION_FLAG == 1
// Compact (but more complicated) implementation of
// the directionFlags array, using just one BIT of RAM
// per pixel.  This requires a bunch of bit wrangling,
// but conserves precious RAM.  The cost is a few
// cycles and about 100 bytes of flash program memory.
uint8_t  directionFlags[ (NUM_LEDS+7) / 8];

bool getPixelDirection( uint16_t i) {
  uint16_t index = i / 8;
  uint8_t  bitNum = i & 0x07;
  // using Arduino 'bitRead' function; expanded code below
  return bitRead( directionFlags[index], bitNum);
  // uint8_t  andMask = 1 << bitNum;
  // return (directionFlags[index] & andMask) != 0;
}

void setPixelDirection( uint16_t i, bool dir) {
  uint16_t index = i / 8;
  uint8_t  bitNum = i & 0x07;
  // using Arduino 'bitWrite' function; expanded code below
  bitWrite( directionFlags[index], bitNum, dir);
  //  uint8_t  orMask = 1 << bitNum;
  //  uint8_t andMask = 255 - orMask;
  //  uint8_t value = directionFlags[index] & andMask;
  //  if( dir ) {
  //    value += orMask;
  //  }
  //  directionFlags[index] = value;
}
#endif

bool brightEnough(CRGB color){
  // Brightness check for single color effects
  if (color.getLuma() > 30){
    return true;
  }else{
    return false;
  }
}

//////////////////////////////////////////////////////////////////////////
//
// The code for this animation is more complicated than other examples, and 
// while it is "ready to run", and documented in general, it is probably not 
// the best starting point for learning.  Nevertheless, it does illustrate some
// useful techniques.
//
//////////////////////////////////////////////////////////////////////////
//
// In this animation, there are four "layers" of waves of light.  
//
// Each layer moves independently, and each is scaled separately.
//
// All four wave layers are added together on top of each other, and then 
// another filter is applied that adds "whitecaps" of brightness where the 
// waves line up with each other more.  Finally, another pass is taken
// over the led array to 'deepen' (dim) the blues and greens.
//
// The speed and scale and motion each layer varies slowly within independent 
// hand-chosen ranges, which is why the code has a lot of low-speed 'beatsin8' functions
// with a lot of oddly specific numeric ranges.
//
// These three custom blue-green color palettes were inspired by the colors found in
// the waters off the southern coast of California, https://goo.gl/maps/QQgd97jjHesHZVxQ7
//
CRGBPalette16 pacifica_palette_1 = 
    { 0x000507, 0x000409, 0x00030B, 0x00030D, 0x000210, 0x000212, 0x000114, 0x000117, 
      0x000019, 0x00001C, 0x000026, 0x000031, 0x00003B, 0x000046, 0x14554B, 0x28AA50 };
CRGBPalette16 pacifica_palette_2 = 
    { 0x000507, 0x000409, 0x00030B, 0x00030D, 0x000210, 0x000212, 0x000114, 0x000117, 
      0x000019, 0x00001C, 0x000026, 0x000031, 0x00003B, 0x000046, 0x0C5F52, 0x19BE5F };
CRGBPalette16 pacifica_palette_3 = 
    { 0x000208, 0x00030E, 0x000514, 0x00061A, 0x000820, 0x000927, 0x000B2D, 0x000C33, 
      0x000E39, 0x001040, 0x001450, 0x001860, 0x001C70, 0x002080, 0x1040BF, 0x2060FF };


void pacifica_loop()
{
  // Increment the four "color index start" counters, one for each wave layer.
  // Each is incremented at a different speed, and the speeds vary over time.
  static uint16_t sCIStart1, sCIStart2, sCIStart3, sCIStart4;
  static uint32_t sLastms = 0;
  uint32_t ms = GET_MILLIS();
  uint32_t deltams = ms - sLastms;
  sLastms = ms;
  uint16_t speedfactor1 = beatsin16(3, 179, 269);
  uint16_t speedfactor2 = beatsin16(4, 179, 269);
  uint32_t deltams1 = (deltams * speedfactor1) / 256;
  uint32_t deltams2 = (deltams * speedfactor2) / 256;
  uint32_t deltams21 = (deltams1 + deltams2) / 2;
  sCIStart1 += (deltams1 * beatsin88(1011,10,13));
  sCIStart2 -= (deltams21 * beatsin88(777,8,11));
  sCIStart3 -= (deltams1 * beatsin88(501,5,7));
  sCIStart4 -= (deltams2 * beatsin88(257,4,6));

  // Clear out the LED array to a dim background blue-green
  fill_solid( leds, NUM_LEDS, CRGB( 2, 6, 10));

  // Render each of four layers, with different scales and speeds, that vary over time
  pacifica_one_layer( pacifica_palette_1, sCIStart1, beatsin16( 3, 11 * 256, 14 * 256), beatsin8( 10, 70, 130), 0-beat16( 301) );
  pacifica_one_layer( pacifica_palette_2, sCIStart2, beatsin16( 4,  6 * 256,  9 * 256), beatsin8( 17, 40,  80), beat16( 401) );
  pacifica_one_layer( pacifica_palette_3, sCIStart3, 6 * 256, beatsin8( 9, 10,38), 0-beat16(503));
  pacifica_one_layer( pacifica_palette_3, sCIStart4, 5 * 256, beatsin8( 8, 10,28), beat16(601));

  // Add brighter 'whitecaps' where the waves lines up more
  pacifica_add_whitecaps();

  // Deepen the blues and greens a bit
  pacifica_deepen_colors();
}

// Add one layer of waves into the led array
void pacifica_one_layer( CRGBPalette16& p, uint16_t cistart, uint16_t wavescale, uint8_t bri, uint16_t ioff)
{
  uint16_t ci = cistart;
  uint16_t waveangle = ioff;
  uint16_t wavescale_half = (wavescale / 2) + 20;
  for( uint16_t i = 0; i < NUM_LEDS; i++) {
    waveangle += 250;
    uint16_t s16 = sin16( waveangle ) + 32768;
    uint16_t cs = scale16( s16 , wavescale_half ) + wavescale_half;
    ci += cs;
    uint16_t sindex16 = sin16( ci) + 32768;
    uint8_t sindex8 = scale16( sindex16, 240);
    CRGB c = ColorFromPalette( p, sindex8, bri, LINEARBLEND);
    leds[i] += c;
  }
}

// Add extra 'white' to areas where the four layers of light have lined up brightly
void pacifica_add_whitecaps()
{
  uint8_t basethreshold = beatsin8( 9, 55, 65);
  uint8_t wave = beat8( 7 );
  
  for( uint16_t i = 0; i < NUM_LEDS; i++) {
    uint8_t threshold = scale8( sin8( wave), 20) + basethreshold;
    wave += 7;
    uint8_t l = leds[i].getAverageLight();
    if( l > threshold) {
      uint8_t overage = l - threshold;
      uint8_t overage2 = qadd8( overage, overage);
      leds[i] += CRGB( overage, overage2, qadd8( overage2, overage2));
    }
  }
}

// Deepen the blues and greens
void pacifica_deepen_colors()
{
  for( uint16_t i = 0; i < NUM_LEDS; i++) {
    leds[i].blue = scale8( leds[i].blue,  145); 
    leds[i].green= scale8( leds[i].green, 200); 
    leds[i] |= CRGB( 2, 5, 7);
  }
}
