#include "Paw.h"

Paw leftPaw(2,4,true);
Paw rightPaw(13, 8, false);
Paw paw[] = {leftPaw, rightPaw};

void setup() {
  // put your setup code here, to run once:
  int leftPositions[] = {52,60,70,80,95,99,112};
  int rightPositions[] = {65,75,85,95,107,115,135};
  paw[0].setup(leftPositions);
  paw[1].setup(rightPositions);

  Serial.begin(9600);
}

void loop() {
  /* Process for loop():
   *  - Read serial (bufferToNote)
   *    - paw[note.whichPaw].goToNote(note);
   */
   for(int i = 0; i < 7; i = (i+1)%7){
     Note note;
     note.noteName = i;
     note.velocity = 100;
     for(int j = 0; j < 2; j++)
      paw[j].goToNote(note);
     delay(500);
     for(int j = 0; j < 2; j++)
      paw[j].hammerDown();
     delay(750);
   }
}
