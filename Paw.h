#pragma once
#ifndef Paw_h
#define Paw_h

#include <Arduino.h>
#include "Utility.h"
#include <Servo.h>

class Paw{
  public:
    Paw(int lowPos, int highPos, int servoPin, int solenoidPin);
    void setAngle(int degrees); // Turns Paw
    void playNote(Note note); 
    
    void hammerDown(); // Actuates Mallet; Non-blocking, going down triggers interrupt to raise
    void hammerUp();
    
    int low;
    int high;
  private:
    Servo servo;
    int _solenoidPin;
};

#endif
