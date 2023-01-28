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
  {"DO2", 130.812775},
  {"DO2#", 138.591315},
  {"RE2", 146.832367},
  {"RE2#", 155.563492},
  {"MI2", 164.813766},
  {"FA2", 174.614121},
  {"FA2#", 184.997192},
  {"SOL2", 195.997696},
  {"SOL2#", 207.652344},
  {"LA2", 220},
  {"LA2#", 233.081894},
  {"SI2", 246.941651},
  {"DO3", 261.625519},
  {"DO3#", 277.182648},
  {"RE3", 293.664734},
  {"RE3#", 311.126984},
  {"MI3", 329.627533},
  {"FA3", 349.228241},
  {"FA3#", 369.994385},
  {"SOL3", 391.995392},
  {"SOL3#", 415.304688},
  {"LA3", 440},
  {"LA3#", 466.163788},
  {"SI3", 493.883301},
};

double getNote(String name) {
  for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
    if (notes[i].name == name) {
      return notes[i].frequency;
    }
  }
}



String furElise[17] = {
  "MI3",
  "RE3#",
  "MI3",
  "RE3#",
  "MI3",
  "SI2",
  "RE3",
  "DO3",
  "LA2",
  "DO2",
  "MI2",
  "LA2",
  "SI2",
  "MI2",
  "SOL2",
  "SI2",
  "DO3"
};

void play(double note) {
  tone(buzzer, note, 400);
  delay(400);
};

void loop()
{
  running = digitalRead(button);
  if (running == HIGH) {
    for (int i = 0; i < 9; i++) {
      play(getNote(furElise[i]));
    }
  }
};
