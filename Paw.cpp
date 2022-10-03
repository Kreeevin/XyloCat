#include "Paw.h"

Paw::Paw(int lowPos, int highPos, int servoPin, int hammerPin): _hammerPin(hammerPin), _servoPin(servoPin), low(lowPos), high(highPos) {

}

void Paw::setup(){
  servo.attach(_servoPin);
  pinMode(_servoPin, OUTPUT);
  hammer.attach(_hammerPin);
  pinMode(_hammerPin, OUTPUT);
}
void Paw::setAngle(int degrees){
  servo.write(degrees);
}

void Paw::hammerDown(){
  //digitalWrite(_solenoidPin, HIGH);
  hammer.write(high);
}

void Paw::hammerUp(){
  //digitalWrite(_solenoidPin, LOW);
  hammer.write(low);
}
