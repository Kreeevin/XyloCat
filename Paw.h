#pragma once
#ifndef Paw_h
#define Paw_h

#include <Arduino.h>
#include "Utility.h"
#include <Servo.h>

class Paw{
  public:
    Paw(int servoPin, int hammerPin, bool isLeft);
    void goToNote(Note note); 
    
    void setAngle(int degrees); // Turns Paw
    void hammerDown(); // Actuates Mallet; Non-blocking, going down triggers interrupt to raise
    void hammerUp(int degrees);

    void printPositions();
    void setup(int* positions);
  private:
    bool isLeft;
    int downPos = isLeft? 48:120;
    Servo servo;
    Servo hammer;
    int* noteToServoPos;
    int _hammerPin;
    int _servoPin;
};

#endif
