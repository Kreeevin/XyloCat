#include "Paw.h"

Paw paw(60,135,7,13);

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
