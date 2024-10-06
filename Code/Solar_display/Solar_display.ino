#include <Tiny4kOLED.h>
#include "spleen.h"
#include "batt.h"

uint8_t currentCharacter;
uint8_t i = 0;
uint8_t lvl = 0;
uint8_t bar = 0;
uint8_t n = 0;

void setup() {
  oled.begin(64, 32, sizeof(tiny4koled_init_64x32), tiny4koled_init_64x32);
  oled.on();
  oled.switchRenderFrame();
  analogReference(INTERNAL2V5); // set reference to the desired voltage, and set that as the ADC reference.
}

void loop() {
  for (n = 0; n <4; n++){
    delay(250);
    float v = analogReadEnh(A7,13)/1654.62;
    float a = analogReadEnh(A6,13)/2129.92*0.92;
    if (v<3.60) lvl = 1;
    else if (v<3.79) lvl = 2;
    else if (v<3.97) lvl = 3;
    else if (v<4.10) lvl = 4;
    else lvl = 5;
    if (a>0.01) bar = lvl - i;
    else if (a<0.01 && v<3.3) bar = 0;
    else bar = lvl;
    oled.clear(); //all black
    oled.setFont(FONTspleen);
    oled.setCursor(0,0); 
    oled.print(v*a,2);
    oled.setCursor(36,0); 
    oled.print("/");
    oled.setCursor(48,0);
    oled.setFont(FONTbatt);
    oled.print(bar);
    oled.setFont(FONT6X8);
    oled.setCursor(14,2);
    oled.print(v,2);
    oled.print("V");
    oled.setCursor(14,3);
    oled.print(a,2);
    oled.print("A");
    oled.switchFrame();
  }
  n = 0;
  if (i==0) i=1;
  else i=0;
}
