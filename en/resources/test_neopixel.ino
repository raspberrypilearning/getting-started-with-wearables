#include <Adafruit_NeoPixel.h>

int pin = 6;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, pin, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show();

}

void loop() {
  // put your main code here, to run repeatedly:
  // Blank
  strip.setPixelColor(0, 0,0,0);
  strip.show();
  delay(1000);

  // Blue
  strip.setPixelColor(0, 0,0,255);
  strip.show();
  delay(1000);

}
