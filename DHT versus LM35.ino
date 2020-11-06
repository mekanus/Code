#include "DHT.h"
#define DHT22_PIN 2
#define DHT11_PIN A0
#define DHT22_TYPE DHT22
#define DHT11_TYPE DHT11
DHT dht22(DHT22_PIN, DHT22_TYPE);
DHT dht11(DHT11_PIN, DHT11_TYPE);

void setup() {
  Serial.begin(9600);
  dht22.begin();
  dht11.begin();
  delay(500);
}

void loop() {
 
  Serial.print("DHT 22: - ");
  float hum22 = dht22.readHumidity();
  Serial.print("Humidade: ");
  Serial.print(hum22);
  Serial.print(" %");
  float temp22 = dht22.readTemperature();
  Serial.print(" - Temperatura: ");
  Serial.print(temp22);
  Serial.println(" Graus");
  delay(2000);

  Serial.print("DHT 11: - ");
  float hum11 = dht11.readHumidity();
  Serial.print("Humidade: ");
  Serial.print(hum11);
  Serial.print(" %");
  float temp11 = dht11.readTemperature();
  Serial.print(" - Temperatura: ");
  Serial.print(temp11);
  Serial.println(" Graus");
  delay(2000);

  Serial.print("LM35: - ");
  int templm35 = (analogRead(A2) * 0.00488 * 100);
  Serial.print("Temperatura: ");
  Serial.print(templm35);
  Serial.println(" Graus");
  delay(2000);

}
