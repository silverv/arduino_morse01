#include "pulse.h"
#include "morsechars.h"
void sendMessage(String inputSentence, PulseManager pulseManager) {
  for (unsigned short i = 0; i < inputSentence.length(); i++) {
    char *curChar = u[toupper(inputSentence.charAt(i))];
    if (inputSentence[i] == ' ') {
      delay(pulseManager.timeMultiplier * 7);
      continue;
    }
    if (i + 1 < inputSentence.length() && inputSentence[i] != inputSentence[i + 1]) {
      pulseManager.shortDelay();
    }
    for (unsigned short j = 0; curChar[j] != '\0'; j++)
    {
      if (curChar[j] == '.') {
        pulseManager.shortPulse();
      } else {
        pulseManager.longPulse();
      }
    }
    delay(pulseManager.timeMultiplier * 3);
  }
}
