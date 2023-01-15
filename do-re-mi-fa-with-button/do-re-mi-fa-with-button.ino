int buzzer = 8;
int button = 7;

int running = LOW;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
}

struct Note {
  String name;
  double frequency;
};

Note notes[] = {
  {"do", 261.625519},
  {"re", 293.664734},
  {"mi", 329.627533},
  {"fa", 349.228241},
  {"sol", 391.995392},
  {"la", 440},
  {"si",  493.883301},
};

void play(double note) {
  tone(buzzer, note, 400);
  delay(400);
};

void do0() {
  play(notes[0].frequency);
};

void re0() {
  play(notes[1].frequency);
};

void mi0() {
  play(notes[2].frequency);
};

void fa0() {
  play(notes[3].frequency);
};


void sol0() {
  play(notes[4].frequency);
};

void la0() {
  play(notes[5].frequency);
};

void si0() {
  play(notes[6].frequency);
};



void loop()
{
  running = digitalRead(button);
  if (running == HIGH) {
    do0();
    re0();
    mi0();
    fa0();
    fa0();
    fa0();
    do0();
    re0();
    do0();
    re0();
    re0();
    re0();
    do0();
    sol0();
    fa0();
    mi0();
    mi0();
    mi0();
    do0();
    re0();
    mi0();
    fa0();
  }
};
