#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>


int sensor = 2;
int V0 = 4;
int RS = 5;
int E = 6;
int D4 = 7;
int D5 = 8;
int D6 = 9;
int D7 = 10;

int temp;
int hum;

DHT dht(sensor, DHT11);

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

void setup(){
    dht.begin();
    
    lcd.begin(16, 2);
    analogWrite(V0, 50);
  }

void loop(){
    hum = dht.readHumidity();
    temp = dht.readTemperature();

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Temperatura: ");
    lcd.print(temp);
    lcd.print("C");
    
    lcd.setCursor(0, 1);
    lcd.print("Humedad: ");
    lcd.print(hum);
    lcd.print("%");

    delay(30000);
    
  }
