#pragma once
#ifndef Utility_h
#define Utility_h

#include <Arduino.h>

typedef struct Note{
  char noteName;
  int duration;
  inline static int noteToPosition(char noteName){
    return 0;
  };
  inline static int noteToMotorSpeed(char noteName){
    return 0;
  }
};

#endif
