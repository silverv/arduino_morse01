#include "pulse.h"
#include "Arduino.h"
PulseManager::PulseManager(int led, int timeMultiplier) : led(led), timeMultiplier(timeMultiplier){
  pinMode(led, OUTPUT);
}
void PulseManager::shortPulse() {
  digitalWrite(led, HIGH);
  delay(timeMultiplier);
  digitalWrite(led, LOW);
  delay(timeMultiplier);
}
void PulseManager::test() {
  shortPulse();
  shortPulse();
  shortPulse();
  shortPulse();
  shortPulse();
  shortPulse();
}
void PulseManager::longPulse() {
  digitalWrite(led, HIGH);
  delay(timeMultiplier * 3);
  digitalWrite(led, LOW);
  delay(timeMultiplier);
}
void PulseManager::shortDelay() {
  delay(timeMultiplier);
}
