#include <Otto9.h>

Otto9 Otto;

#define PIN_YL 2
#define PIN_YR 3
#define PIN_RL 4
#define PIN_RR 5
#define PIN_Trigger 8
#define PIN_Echo 9
#define PIN_Buzzer 13

void setup(){
   Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true, A6, PIN_Buzzer, PIN_Trigger, PIN_Echo);
   pinMode(13, OUTPUT);
  }

void loop(){
    Otto.walk(1, 750, 1);//recto
    delay(1*1000);
    Otto.moonwalker(1, 1000, 25, 1);
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
    Otto.swing(1, 1000, 25);
    delay(1*1000);
    Otto.walk(1, 750, -1);//recto hacia atras

  
    
  }
