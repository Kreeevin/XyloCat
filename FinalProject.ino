#include "Paw.h"

Paw leftPaw(60,90,2,4);
Paw rightPaw(60,90,6,13);
Paw paw[] = {leftPaw, rightPaw};
int angle = 90;
int dir = 1;
void setup() {
  // put your setup code here, to run once:
  int leftPositions = {0,0,0,0,0,0,0};
  int rightPositions = {0,0,0,0,0,0,0};
  paw[0].setup(leftPositions);
  paw[1].setup(rightPositions);
}

void loop() {
  
}
