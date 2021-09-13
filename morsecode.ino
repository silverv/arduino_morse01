#include "morse.h"
// This is just something that is easier to recognise and test the program
// Look at the chart to recognise the other messages: https://en.wikipedia.org/wiki/Morse_code
String inputSentence = "SOS";
int counter = 0;
bool toggled = false;
PulseManager pm{9,60};
void setup() {
  Serial.begin(4800);
  while (!Serial && millis() < 5000) {
    //wait for USB serial to connect or 5 seconds to elapse
  }
  Serial.println("Begin");
  
  //pm.test();
  //pm.longPulse();
  //sendMessage(inputSentence, pm);
}

// the loop routine runs over and over again forever:
void loop() {
  delay(100);
  if(!toggled && analogRead(1)< 500){
    toggled = true;
    sendMessage(inputSentence, pm);
    delay(2000);
    toggled = false;
  }
}
