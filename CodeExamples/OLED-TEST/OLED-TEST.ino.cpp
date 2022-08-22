#include <Arduino.h>
#line 1 "C:\\Users\\danny\\Documents\\Arduino\\OLED-TEST\\OLED-TEST.ino"
#include <SPI.h>
#include <Wire.h>
#include <WiFi.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

/*
void display_scrolltext(void) {
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println(F("I DID IT!));
  delay(5000);
  display.clearDisplay();
}
*/
#line 25 "C:\\Users\\danny\\Documents\\Arduino\\OLED-TEST\\OLED-TEST.ino"
void setup();
#line 42 "C:\\Users\\danny\\Documents\\Arduino\\OLED-TEST\\OLED-TEST.ino"
void loop();
#line 25 "C:\\Users\\danny\\Documents\\Arduino\\OLED-TEST\\OLED-TEST.ino"
void setup() {
  Serial.begin(115200);
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
 display.clearDisplay();
 display.setTextColor(WHITE);
 display.setTextSize(2);
 display.setCursor(0,0);
 display.println("BlackBot");
 display.setCursor(0,28);
 display.setTextSize(1);
 display.println("Remote: ");
 display.println(WiFi.macAddress());
 display.display();
}
void loop() {
}

