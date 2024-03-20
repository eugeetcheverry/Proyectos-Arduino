#include <IRremote.h>
#include <ir_Lego_PF_BitStreamEncoder.h>
#include <Servo.h>

int echo = 6; //color violeta
int trigger = 7;//color gris

int distancia = 0;
int tiempo = 0;

Servo piernaizqbaja;
Servo piernaderbaja;
Servo piernaizqalta;
Servo piernaderalta;

void setup(){
  //setup ultrasonico
    Serial.begin(9600);
    pinMode(trigger , OUTPUT); // Pin como salida
    pinMode(echo, INPUT); //Pin como entrada
    digitalWrite(trigger,LOW); //lo arrancamos con 0
    //setup piernas
    piernaizqbaja.attach(2);//color violeta
    piernaderbaja.attach(3);//color blanco
    piernaizqalta.attach(4);//color rojo
    piernaderalta.attach(5);//color verde
    
    piernaizqbaja.write(0);//color
    piernaizqalta.write(0);//color
    piernaderalta.write(0);//color
    piernaderbaja.write(0);//color
}

void loop(){
    digitalWrite(trigger, HIGH);
    tiempo = pulseIn(echo, HIGH);
    
    if((distancia = tiempo/59) < 20){
         delay(5000);
         piernaizqbaja.write(45);
         piernaizqalta.write(-90);
         delay(1000);
         piernaizqalta.write(0);
         piernaizqbaja.write(0);
         delay(1000);
         piernaderbaja.write(45);
         piernaderalta.write(-90);
         delay(1000);
         piernaderalta.write(0);
         piernaderbaja.write(0);
        }
  delay(5000);
}
   

    
  
