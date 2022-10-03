#include "Paw.h"

Paw::Paw(int lowPos, int highPos, int servoPin, int solenoidPin): _servoPin(servoPin), _solenoidPin(solenoidPin), low(lowPos), high(highPos) {
  
}

void Paw::setup(){
  servo.attach(_servoPin);
  pinMode(_servoPin, OUTPUT);
  pinMode(_solenoidPin, OUTPUT);
}

void Paw::setAngle(int degrees){
  servo.write(degrees);
}

void Paw::hammerDown(){
  digitalWrite(_solenoidPin, HIGH);
}

void Paw::hammerUp(){
  digitalWrite(_solenoidPin, LOW);
}
