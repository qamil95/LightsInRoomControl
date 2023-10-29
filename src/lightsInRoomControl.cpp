#include "main.h"


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(insideWardrobeButton, INPUT_PULLUP);
  pinMode(betweenWardrobesButton, INPUT_PULLUP);
  pinMode(onDoorButton, INPUT_PULLUP);
  }

void loop() {  
  if (digitalRead(insideWardrobeButton) == LOW)
  {
    changeLedState(LED_BUILTIN);
  }

  if (digitalRead(betweenWardrobesButton) == LOW)
  {
    changeLedState(LED_BUILTIN);
  }

  if (digitalRead(onDoorButton) == LOW)
  {
    changeLedState(LED_BUILTIN);    
  }
}

void changeLedState(byte pinNumber)
{
  unsigned long int currentTime = millis();

  if (currentTime > blockButtonsUntil)
  {
      digitalWrite(pinNumber, !digitalRead(pinNumber));
  }
  blockButtonsUntil = currentTime + timeOfButtonsBlock;
}