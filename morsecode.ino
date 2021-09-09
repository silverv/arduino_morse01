#include "morse.h"
// This is just something that is easier to recognise and test the program
// Look at the chart to recognise the other messages: https://en.wikipedia.org/wiki/Morse_code
String inputSentence = "SOS";
int counter = 0;
void setup() {
  PulseManager pm{8, // PIN 8 has my red led through a 180 Ohm resistor
  200 // dit length in milliseconds, this is a slow dit length
  };
  //pm.test();
  //pm.longPulse();
  sendMessage(inputSentence, pm);
}

// the loop routine runs over and over again forever:
void loop() {

}
