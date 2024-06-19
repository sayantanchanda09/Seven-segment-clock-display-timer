#include "SevSeg.h"

SevSeg sevseg;
unsigned long timer = 0;

long previousMillis = 0; 
 
long interval = 1000;        

#define SECS_PER_MIN  (60UL)
#define SECS_PER_HOUR (3600UL)

#define numberOfSeconds(_time_) (_time_ % SECS_PER_MIN)  
#define numberOfMinutes(_time_) ((_time_ / SECS_PER_MIN) % SECS_PER_MIN) 

void setup() {

  byte numDigits = 4;   
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  bool resistorsOnSegments = false; // Use 'false' if on digit pins
  byte hardwareConfig = COMMON_ANODE; // See README.md for options
  
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(10); 
}

void loop() {
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   
    timer++;
  }

  printTimer();  
}

void printTimer()
{
  int minutes = numberOfMinutes(timer);
  int seconds = numberOfSeconds(timer);
  sevseg.setNumber(minutes*100 + seconds,2);
  sevseg.refreshDisplay();
}
