#pragma once
#ifndef Paw_h
#define Paw_h

#include <Arduino.h>
#include "Utility.h"
#include <Servo.h>

class Paw{
  public:
    Paw(int servoPin, int solenoidPin);
    void goToNote(Note note); 
    
    void hammerDown(); // Actuates Mallet; Non-blocking, going down triggers interrupt to raise
    void hammerUp();
    
    void setup(int* positions);
  private:
    
    void setAngle(int degrees); // Turns Paw
  
    Servo servo;
    Servo hammer;
    int* noteToServoPos;
    int _hammerPin;
    int _servoPin;
};

#endif
