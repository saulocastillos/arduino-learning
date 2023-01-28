#include "furElise.h"
#include "notes.h"

int buzzer = 8;
int button = 7;

int running = LOW;

void setup()
{
 
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
  analogWrite(buzzer, 0);
}

double getNote(String name) {
  for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
    if (notes[i].name == name) {
      return notes[i].frequency;
    }
  }
}


void play(double note) {
  tone(buzzer, note, 400);
  delay(400);
};

void loop(){
  running = digitalRead(button);
  
  if (running == HIGH) {
    for (int i = 0; i < sizeof(furElise) / sizeof(furElise[0]); i++) {
      play(getNote(furElise[i]));
    }
  }
};
