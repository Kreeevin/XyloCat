#include "Paw.h"

Paw paw(60,135,7,13);

enum RightNote = {G1=90,A1=90,B1=90,C1=90,D1=90,E1=90,F1=90,G2=0,A2=0,B2=0,C2=0,D2=0,E2=0,F2=0,G3=0}; //notes 0-7 are played by right hand, notes 7-15 by left hand 
enum LeftNote = {G1=0,A1=0,B1=0,C1=0,D1=0,E1=0,F1=0,G2=90,A2=90,B2=90,C2=90,D2=90,E2=90,F2=90,G3=90}; //notes 0-7 are played by right hand, notes 7-15 by left hand 

void setup() {
  // put your setup code here, to run once:
  paw.setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  paw.hammerUp();
  delay(1000);
  paw.hammerDown();
  delay(1000);
}
