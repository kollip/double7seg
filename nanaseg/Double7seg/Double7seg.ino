#include <Adafruit_NeoPixel.h>
#include <MsTimer2.h>
#define PININIT        2
#define SERIAL_IN_NUM  8
#define NUMPIXELS      266
#define BRIGHTNESS     100
#define MODE_MAX       204

//Adafruit_NeoPixel pp[SIGNAL];
Adafruit_NeoPixel p1=Adafruit_NeoPixel(NUMPIXELS, PININIT, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel p2=Adafruit_NeoPixel(NUMPIXELS, PININIT+1, NEO_GRB + NEO_KHZ800);

//variables
int serial[8]={201,1,101,0,0,0,0,0};
int mode=201;
int h_LED_first=1;
int h_LED_second=101;
int number_in[4]={0,0,0,0};
int value=0;
int color_LED_first[3]={0,0,0};
int color_LED_second[3]={0,0,0};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //MsTimer2::set(100, light); // 500msの期間
  //MsTimer2::start();
  
  p1.begin();
  p2.begin();

  p1.setBrightness(BRIGHTNESS);
  p2.setBrightness(BRIGHTNESS);

  for(int i=0;i<NUMPIXELS;i++){
    p1.setPixelColor(i, p1.Color(0,0,0));
    p2.setPixelColor(i, p2.Color(0,0,0));
  }
  p1.show();
  p2.show();
}

void loop() {
  //Serial
  //Serial.println("here");

  /*
  if(Serial.available()>0){
    Serial.println("here");
    for(int i=0;i<SERIAL_IN_NUM;i++){
        serial[i]=Serial.read();
        //Serial.print(" ");
        Serial.print(" ");
      }
    Serial.println(" ");
  }
  if(serial[0]>=201&&serial[0]<=MODE_MAX){
    mode=serial[0];
  }
  if(serial[1]>=1&&serial[1]<=100){
    h_LED_first=map(serial[1],1,100,0,360);
    color_LED_first[0]=HSV_to_R(h_LED_first,255,value);//s,v=0~255
    color_LED_first[1]=HSV_to_G(h_LED_first,255,value);//s,v=0~255
    color_LED_first[2]=HSV_to_B(h_LED_first,255,value);//s,v=0~255
  }
  if(serial[2]>=101&&serial[2]<=200){
    h_LED_second=map(serial[2],101,200,0,360);
    color_LED_second[0]=HSV_to_R(h_LED_second,255,value);//s,v=0~255
    color_LED_second[1]=HSV_to_G(h_LED_second,255,value);//s,v=0~255
    color_LED_second[2]=HSV_to_B(h_LED_second,255,value);//s,v=0~255
  }
  for(int i_num=3;i_num<=6;i_num++){
    if(serial[i_num]>=0&&serial[i_num]<=9){
      number_in[i_num-3]=serial[i_num];
    }
  }
  if(serial[7]>=221&&serial[7]<=240){
    value=map(serial[7],221,240,0,255);
   }

  */

  
  //Light
  /*
  switch(mode){
    case 201:
      all_clean();
      break;
    case 202:
      all_light(255,0,0);
      break;
    case 203:
      for(int i=1;i<=4;i++){
        number(i,number_in[i-1],color_LED_first[0],color_LED_first[1],color_LED_first[2]);
      }
      all_show();
      break;
    case 204:
      for(int i=1;i<=4;i++){
        number(i,number_in[i-1],color_LED_second[0],color_LED_second[1],color_LED_second[2]);
      }
      all_show();
      break;
    default:
      break;
  }
  */

  /*
  for(int i=0;i<NUMPIXELS;i++){
    p1.setPixelColor(i, p1.Color(0,255,0));
    p2.setPixelColor(i, p2.Color(255,0,0));
  }
  p1.show();
  p2.show();
  delay(1000);
  */
  //Serial.flush();
  
  Light_pattern();

}
