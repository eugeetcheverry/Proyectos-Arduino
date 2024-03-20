#include <Servo.h>

Servo piernaizq;
Servo piernader;
Servo pieizq;
Servo pieder;
int buzzer = 13;
//int echo = 9;
//int trig = 8;
int tiempo;
int distancia;

void setup(){
   
   // pinMode(trig, OUTPUT);
   // pinMode(echo, INPUT);
    piernaizq.attach(0);
    piernader.attach(1);
    pieizq.attach(2);
    pieder.attach(3);
  
  }


void loop(){
  
   // digitalWrite(trig, HIGH);
   // delay(500);
   // digitalWrite(trig, LOW);
   // tiempo = pulseIn(echo, HIGH);
   // distancia = tiempo / 58.2;
   // delay(500);

    //if(distancia <= 20)
    //{
      tone(13, 261, 250);
      delay(250);
      piernaizq.write(90);
      piernader.write(90);
      delay(500);
      tone(13, 329, 250);
      delay(250);
      piernaizq.write(40);
      piernader.write(40);
      tone(13, 392, 250);
      delay(125);
      delay(500);
      pieder.write(45);
      pieizq.write(45);
      tone(13, 261, 250);
      delay(250);
      tone(13, 293, 250);
      delay(250);
      tone(13, 329, 250);
      delay(250);
      tone(13, 349, 250);
      delay(250);
      tone(13, 392, 250);
      delay(125);
      tone(13, 329, 250);
      delay(250);
      tone(13, 261, 250);
      delay(250);
      tone(13, 293, 250);
     delay(250);
     tone(13, 329, 250);
     delay(250);
     tone(13, 349, 250);
     delay(125);
     tone(13, 293, 250);
     delay(250);
    
   
    //}

    
  }
