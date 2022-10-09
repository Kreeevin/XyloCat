#pragma once
#ifndef Paw_h
#define Paw_h

#include <Arduino.h>
#include "Utility.h"
#include <Servo.h>

class Paw{
  public:
    Paw(int servoPin, int hammerPin);
    void goToNote(Note note); 
    
    void setAngle(int degrees); // Turns Paw
    void hammerDown(); // Actuates Mallet; Non-blocking, going down triggers interrupt to raise
    void hammerUp(int degrees = 60);

    void printPositions();
    void setup(int* positions);
  private:
    
    int downPos = 60;
    Servo servo;
    Servo hammer;
    int* noteToServoPos;
    int _hammerPin;
    int _servoPin;
};

#endif
