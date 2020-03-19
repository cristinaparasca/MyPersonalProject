#include <SimpleDHT.h>
int pinDHT11 = 2;
SimpleDHT11 dht11(pinDHT11);
void setup() {
  Serial.begin(9600);
}
void loop() {
  byte temperatura = 0;
  byte umiditate = 0;
  int err = SimpleDHTErrSuccess;

    if ((err = dht11.read(&temperatura, &umiditate, NULL)) != SimpleDHTErrSuccess) //se verifica daca exista eroare la primirea datelor senzorului
    {
      Serial.print("Read DHT11 failed, err=");
      Serial.println(err);
      delay(1000);
      return;
    }

    Serial.println("================================="); 
    Serial.print("Sample OK: ");
    Serial.print((int)temperatura);
    Serial.print(" *C, ");
    Serial.print((int)umiditate);
    Serial.println(" H");

    delay(1500);
  
}
