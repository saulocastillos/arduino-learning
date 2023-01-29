#include <Servo.h>
#define SERVO 2

Servo s;
int pos;

int botaoAmarelo = 8;
int botaoVerde = 10;
int potenciometro = A0;

int leituraAnteriorPotenciometro = analogRead(potenciometro);

void setup ()
{
  s.attach(SERVO);
  Serial.begin(9600);
  s.write(0);
  pinMode(potenciometro, INPUT);
  
}

void loop()
{
  Serial.print("Valor: ");
  Serial.println(pos);
  delay(30);


  int leituraPotenciometro = analogRead(potenciometro);
  
  if(
    leituraPotenciometro + 2 <= leituraAnteriorPotenciometro 
    || 
    leituraPotenciometro - 2 >= leituraAnteriorPotenciometro)
  {
    leituraAnteriorPotenciometro = leituraPotenciometro / 5.3;
    if(leituraAnteriorPotenciometro <= 180){
      pos = leituraAnteriorPotenciometro;
      s.write(pos);
    }
  }
  
}