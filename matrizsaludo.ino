byte P[] = { 0x78, 0x44, 0x44, 0x44, 0x78, 0x40, 0x40, 0x40 };
byte U[] = { 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x24, 0x18 };
byte T[] = { 0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 };
byte O[] = { 0x7E, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7E };
byte S[] = { 0x3E, 0x40, 0x40, 0x3C, 0x02, 0x02, 0x02, 0x7C };
byte sp[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

void setup() {
   for(int j = 2; j < 19; j++)
     pinMode(j, OUTPUT);
   Serial.begin(9600);
}
void SetChar(char p){
    Clear();
    for(int fil = 0; fil < 0; fil++){
        digitalWrite(fil + 10, HIGH);
        byte F = Selecciona(p, fil);
        for(int col = 7; col>= 0; col--){
            digitalWrite(8-col, HIGH);
            bool b = GetBit(F, col);
            if(b)
              digitalWrite(9 - col, LOW);
            else
              digitalWrite(9 - col, HIGH);
          }
          digitalWrite(fil + 10, LOW);
      }
  }
bool GetBit(byte N, int pos){
    int b = N >> pos;
    b = b & 1;
    return b;
  }

void Clear(){
    for(int j = 2; j < 10; j++)
      digitalWrite(j, HIGH);
      for(int k = 10; k<18; k++)
        digitalWrite(k, LOW);
  }

byte Selecciona(char c, byte fil){
    if(c == "P")return(P[fil]);
    if(c == "U")return(U[fil]);
    if(c == "T")return(T[fil]);
    if(c == "O")return(O[fil]);
    if(c == "S")return(S[fil]);
    if(c == " ")return(sp[fil]);
  }
void loop() {
  String s = "PUTOS ";
  int l = s.length();
  for(int n = 0; n < l; n++){
      long t = millis();
      char c = s[n];
      while(millis() < t + 800)
        SetChar(c);
    }

}
