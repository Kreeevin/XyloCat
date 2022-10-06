#pragma once
#ifndef Utility_h
#define Utility_h

#include <Arduino.h>

typedef struct Note{
  String noteName;
  int duration;
  inline static int noteToPosition(String noteName){
    return 0;
  };
  inline static int noteToMotorSpeed(String noteName){
    return 0;
  }
};

// function for converting MIDI info from serial buffer to Note
// serial input is done in batches of two (with the lab example of inByte1 and inByte2) (?) 
Note bufferToNote(byte[] buf){
  //buf[0] is pitch, [1] is velocity
  struct Note theNote;
  theNote.noteName = ""; //figure this out later
  theNote.duration = buf[1];
  return theNote;
}

#endif
