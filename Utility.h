#pragma once
#ifndef Utility_h
#define Utility_h

#include <Arduino.h>

typedef enum NoteName{
  G=0,
  A=1,
  B=2,
  C=3,
  D=4,
  E=5,
  F=6
};

typedef struct Note{
  NoteName noteName; // Will correlate to position
  int velocity;
  int whichPaw;
};

inline NoteName byteToNoteName(byte note){
  int transpose = 68; // adjust this later
  return (NoteName) (note-transpose);
};

// function for converting MIDI info from serial buffer to Note
// serial input is done in batches of two (with the lab example of inByte1 and inByte2) (?) 
inline Note bufferToNote(byte* buf){
  //buf[0] is pitch, [1] is velocity
  Note theNote;
  theNote.noteName = byteToNoteName(buf[0]);
  theNote.velocity = buf[1];
  // Add functionality for whichPaw
  return theNote;
};

#endif
