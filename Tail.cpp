#include "Tail.h"

Tail::Tail(int motorPin): _motorPin(motorPin){}

void Tail::playNote(Note note){
  setEffort(Note::noteToMotorSpeed(note.noteName));
  delay(note.duration);
  setEffort(0);
}

// Effort from [0,255]
void Tail::setEffort(int effort){
  analogWrite(_motorPin,effort);
}
