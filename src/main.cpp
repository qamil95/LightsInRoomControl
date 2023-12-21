#include "main.h"


void setup() {
  pinMode(onDoorButton, INPUT_PULLUP);
  pinMode(onDoorOutput, OUTPUT);
  digitalWrite(onDoorOutput, HIGH);

  pinMode(betweenWardrobesButton, INPUT_PULLUP);
  pinMode(betweenWardrobesOutput, OUTPUT);
  digitalWrite(betweenWardrobesOutput, HIGH);

  pinMode(insideWardrobeButton, INPUT_PULLUP);
  pinMode(insideWardrobeOutput, OUTPUT);
  digitalWrite(insideWardrobeOutput, HIGH);
  }

void loop() {  
  if (digitalRead(insideWardrobeButton) == LOW)
  {
    changeLedState(insideWardrobeOutput);
  }

  if (digitalRead(betweenWardrobesButton) == LOW)
  {
    changeLedState(betweenWardrobesOutput);
  }

  if (digitalRead(onDoorButton) == LOW)
  {
    changeLedState(onDoorOutput);    
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