#include "Paw.h"

Paw paw(0,135,6,7);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  paw.setAngle(paw.low);
  delay(250);
  paw.hammerDown();
  delay(1000);
  paw.hammerUp();
  delay(1000);
  paw.setAngle(paw.high);
  delay(250);
  paw.hammerDown();
  delay(1000);
  paw.hammerUp();
  delay(1000);
}
