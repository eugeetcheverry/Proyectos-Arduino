

int led = 2;

int tiltballsensor = 9;

void setup(){
    
    pinMode(led, OUTPUT);
    pinMode(tiltballsensor, OUTPUT);

    digitalWrite(led, LOW);
  }

void loop(){
  digitalWrite(led, LOW);
  
    if(digitalRead(tiltballsensor) == 0){
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);

        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);

        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        
      }
  }
 
