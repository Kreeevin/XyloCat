#include "Paw.h"

Paw leftPaw(2,4,true);
Paw rightPaw(13, 8, false);
Paw paw[] = {leftPaw, rightPaw};
byte buff[2];

void setup() {
  // put your setup code here, to run once:
  int leftPositions[] = {52,60,70,80,95,99,112};
  int rightPositions[] = {65,75,85,95,107,115,135};
  paw[0].setup(leftPositions);
  paw[1].setup(rightPositions);

  Serial.begin(9600);
}

void loop() {
  
  if(Serial.available() > 1){
    buff[0] = Serial.read();
    buff[1] = Serial.read();
    Note note = bufferToNote(buff);
    if(note.velocity != 0)
      paw[note.whichPaw].goToNote(note);
    else
      paw[note.whichPaw].hammerDown();
  }
}
