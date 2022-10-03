#pragma once
#ifndef Tail_h
#define Tail_h

#include "Utility.h"
#include <Arduino.h>

class Tail{
  public:
    Tail(int motorPin);
    void playNote(Note note);
  private:
    void setEffort(int effort);
    int _motorPin;
};

#endif
