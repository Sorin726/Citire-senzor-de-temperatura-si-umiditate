#include <dht.h>
dht DHT; // obiect al clasei DHT
#define DHT11PIN 7 // pinul pe care este conectat senzorul

void setup(){
   Serial.begin(9600); // initializare comunicatie seriala 
}

void loop()
{
  int chk = DHT.read11(DHT11PIN); // citire senzor
  
  Serial.print(DHT.temperature,0); // afisare temperatura
  Serial.print(","); // printare virgula
  Serial.print(DHT.humidity,0); // afisare umiditate
  Serial.println(); // linie noua  
  delay(2000); // intarziere 2 secunde
}
