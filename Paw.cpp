#include "Paw.h"

Paw::Paw(int servoPin, int hammerPin): _hammerPin(hammerPin), _servoPin(servoPin) {
  //lists of angles for each note
  //TODO : fill in this enum with angles per note. 
  
}

void Paw::goToNote(Note note){
    //somehow convert string to check if matches enum value or check enum name to match string ????????????
    //servo.write(REPLACE WITH A NOTE VALUE FROM NOTES ENUM E.G. G2)
}

void Paw::setup(int* positions){
  servo.attach(_servoPin);
  pinMode(_servoPin, OUTPUT);
  hammer.attach(_hammerPin);
  pinMode(_hammerPin, OUTPUT);
  noteToServoPos = positions;
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
