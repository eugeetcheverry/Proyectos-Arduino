void setup(){
    for(int j = 2; j<19; j++)
    pinMode(j, OUTPUT);
  }

void loop(){
    for(int j=2; j < 10; j++){
        digitalWrite(j, HIGH);
        for(int k = 10; k < 18 ; k++){
           digitalWrite(k, LOW);
          } 
      }

      for(int j = 2; j < 10; j++){
          digitalWrite(j, LOW);
          for(int k = 10; k < 18; k++){
              digitalWrite(k, HIGH);
              delay(250);
              digitalWrite(k, LOW);
          }
          digitalWrite(j, HIGH);
        }
         
  }
