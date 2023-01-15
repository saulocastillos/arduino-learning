int buzzer = 8;
int count = 0;

void setup()
{
  pinMode(buzzer, OUTPUT);
}

struct Note {
  String name;
  int frequency;
};

Note notes[] = {
  {"do", 262},
  {"re", 294},
  {"mi", 330},
  {"fa", 349},
  {"sol", 392},
  {"la", 440},
  {"si", 494},
};

void play(int note) {
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
  while (count < 1) {
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
    count++;
  }
};
