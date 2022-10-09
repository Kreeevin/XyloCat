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
   //get the note name from the MIDI data
  //Low: G4, High (possible): E5, High (on instrument): G6
  //note: C%12 = 0
  int remainder = note%12;
  
  NoteName aNotename;
  switch(remainder){
    case 0:
      aNoteName = C;
      break;
    case 1:
      aNoteName = C;
      break;
    case 2:
      aNoteName = D;
      break;
    case 3:
      aNoteName = D;
      break;
    case 4:
      aNoteName = E;
      break;
    case 5:
      aNoteName = F;
      break;
    case 6:
      aNoteName = F;
      break;
    case 7:
      aNoteName = G;
      break;
    case 8:
      aNoteName = G;
      break;
    case 9:
      aNoteName = A;
      break;
    case 10:
      aNoteName = A;
      break;
    case 11:
      aNoteName = B;
      break;
  }
  
  //return (NoteName) (note-transpose);
  return aNoteName;
};

// function for converting MIDI info from serial buffer to Note
// serial input is done in batches of two (with the lab example of inByte1 and inByte2) (?) 
inline Note bufferToNote(byte* buf){
  //buf[0] is pitch, [1] is velocity
  Note theNote;
  if(buf[0] > 87){
    theNote.whichPaw = 0;
  }else{
    theNote.whichPaw = 1;
  }
  theNote.noteName = byteToNoteName(buf[0]);
  theNote.velocity = buf[1];
  // Add functionality for whichPaw
  return theNote;
};

#endif
