#include <Arduino.h>
const int led_pin=2;

void setup() {

  Serial.begin(115200);
  pinMode(led_pin, OUTPUT);

}

void loop() {
  if (Serial.available()> 0){
    String data=Serial.readStringUntil('\n');
    data.trim();
    if (data=="on"){
      digitalWrite(led_pin, HIGH);
      Serial.println("Ack: Led on");
    }
    else if (data=="off"){
      digitalWrite(led_pin, LOW);
      Serial.println("Ack: led off");
    }
    else {
      Serial.println("Enter valid command");
  } 
}
}




