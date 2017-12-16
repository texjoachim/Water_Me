// Water Me
// a small device to tell you when to water your plant

#include <Arduino.h>
#include <flyingFishHelper.h>
#include <rgbLED.h>

// our objects and variables
rgbLED LED(2, 3, 4);
flyingFish MoistureSensor(5, A1);
unsigned int moisture;

void setup() {
    LED.out();
    Serial.begin(9600);
    Serial.println("Water_Me. Using a Moisture Sensor.");
}

void loop() {
    moisture = MoistureSensor.analogread();
    Serial.print("Analog reading: ");
    Serial.println(moisture);
    if (moisture >= 800) {
        LED.out();
        LED.singleon('b');
    }
    if ((moisture >= 500) & (moisture < 800)) {
        LED.out();
        LED.singleon('g');
    }
    if (moisture < 500) {
        LED.out();
        LED.singleon('r');
    }
    delay(1000);
}