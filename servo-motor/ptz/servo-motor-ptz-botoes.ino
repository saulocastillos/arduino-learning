#include <Servo.h>
#define SERVO 2

Servo s;
int pos;

int botaoAmarelo = 8;
int botaoVerde = 10;

void setup ()
{
  s.attach(SERVO);
  Serial.begin(9600);
  s.write(0);
}

void loop()
{
  Serial.print("Valor: ");
  delay(30);
  Serial.println(pos);
   if(digitalRead(botaoVerde)){
    Serial.println("botao verde");
    if(pos < 180){
      pos = pos + 1;
      s.write(pos);
    }
  }
  if(digitalRead(botaoAmarelo)){
    Serial.println("botao amarelo");
    if(pos > 0){
      pos = pos - 1;
      s.write(pos);
    }
  }
}