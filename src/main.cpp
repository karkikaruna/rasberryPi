# include <Arduino.h>
#include "DHT11.h"
const int dht_pin =4;
DHT11 dht(dht_pin) ;

void setup() {
  Serial.begin(115200); 
 
}

void loop() {
  delay(2000);
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  if (isnan(h) || isnan(t)){
    Serial.println("Error: ");
    return ;
  }
  Serial.print( t);
  Serial.print(",");
  Serial.println( h);
}
