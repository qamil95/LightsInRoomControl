#include <Arduino.h>
#include "pins.h"

unsigned long blockButtonsUntil = 0;
const int timeOfButtonsBlock = 50;

unsigned long doNotWriteDebugUntil = 0;
const int timeOfDebugBlock = 1000;

void changeLedState(byte pinNumber);
void debugOutputState();