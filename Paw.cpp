#include "Paw.h"

Paw::Paw(int lowPos, int highPos, int servoPin, int solenoidPin): _solenoidPin(solenoidPin), low(lowPos), high(highPos) {
  servo.attach(servoPin);
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
