#include <Adafruit_NeoPixel.h>
#define PININIT        10
#define NUMPIXELS      266
#define BRIGHTNESS     150

//Adafruit_NeoPixel pp[SIGNAL];
Adafruit_NeoPixel p1=Adafruit_NeoPixel(NUMPIXELS, PININIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel p2=Adafruit_NeoPixel(NUMPIXELS, PININIT+1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel p3=Adafruit_NeoPixel(NUMPIXELS, PININIT+2, NEO_GRB + NEO_KHZ800);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  p1.begin();
  p2.begin();
  p3.begin();

  p1.setBrightness(BRIGHTNESS);
  p2.setBrightness(BRIGHTNESS);
  p3.setBrightness(BRIGHTNESS);

  for(int i=0;i<NUMPIXELS;i++){
    p1.setPixelColor(i, p1.Color(255,0,0));
    p2.setPixelColor(i, p2.Color(0,255,0));
    p3.setPixelColor(i, p3.Color(0,0,255));
  }
  p1.show();
  p2.show();
  p3.show();
}

void loop() {
  /*
  // put your main code here, to run repeatedly:
  for(int i=0;i<int(NUMPIXELS/2);i++){
    which(1,i,255,0,0);
    which(2,i,0,255,0);
    which(3,i,0,0,255);
  }
  for(int i=int(NUMPIXELS/2);i<NUMPIXELS;i++){
    which(1,i,255,0,0);
    which(2,i,0,255,0);
    which(3,i,0,0,255);
  }
  all_show();
  delay(100);
  */
  for(int i=0;i<NUMPIXELS;i++){
    p1.setPixelColor(i, p1.Color(255,0,0));
    p2.setPixelColor(i, p2.Color(0,255,0));
    p3.setPixelColor(i, p3.Color(0,0,255));
  }
  p1.show();
  p2.show();
  p3.show();

  delay(500);

  for(int i=0;i<NUMPIXELS;i++){
    p1.setPixelColor(i, p1.Color(0,0,0));
    p2.setPixelColor(i, p2.Color(0,0,0));
    p3.setPixelColor(i, p3.Color(0,0,0));
  }
  p1.show();
  p2.show();
  p3.show();

  delay(500);
}
