#include <Arduino.h>
#include "pins.h"

unsigned long blockButtonsUntil = 0;
const int timeOfButtonsBlock = 50;

void changeLedState(byte pinNumber);