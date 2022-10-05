#include "Paw.h"

Paw::Paw(int lowPos, int highPos, int servoPin, int hammerPin): _hammerPin(hammerPin), _servoPin(servoPin), low(lowPos), high(highPos, enum notes) {
  //lists of angles for each note
  //TODO : fill in this enum with angles per note. 
  
}

void Paw::goToNote(String note){
    //somehow convert string to check if matches enum value or check enum name to match string ????????????
    //servo.write(REPLACE WITH A NOTE VALUE FROM NOTES ENUM E.G. G2)
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
