#include "Paw.h"

Paw paw(0,135,7,13);

void setup() {
  // put your setup code here, to run once:
  paw.setup();
}

void loop() {
  // put your main code here, to run repeatedly:
//  paw.setAngle(90);
//  delay(250);
  paw.hammerDown();
  delay(1000);
  paw.hammerUp();
  delay(1000);
//  paw.setAngle(180);
//  delay(250);
  paw.hammerDown();
  delay(1000);
  paw.hammerUp();
  delay(1000);
}
