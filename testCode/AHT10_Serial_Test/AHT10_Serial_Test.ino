#include <Wire.h>
#include <AHT10.h>

AHT10Class AHT10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  if(AHT10.begin(eAHT10Address_Low))
    Serial.println("Init AHT10 Success.");
  else
    Serial.println("Init AHT10 Failure.");
}

void loop() {
  Serial.println(String("")+"Humidity(%RH):\t\t"+AHT10.GetHumidity()+"%");
  Serial.println(String("")+"Temperature('C):\t"+AHT10.GetTemperature()+"'C");
  Serial.println(String("")+"Dewpoint('C):\t\t"+AHT10.GetDewPoint()+"'C");
  delay(500);
}
