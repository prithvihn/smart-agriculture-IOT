#include <DHT.h>

#define DHTPIN 2       // DHT11 connected to Arduino Pin 2
#define DHTTYPE DHT11  
#define SOIL_SENSOR A0 // Soil Sensor connected to A0
#define RELAY_PIN 7    // Relay connected to Pin 7

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(9600); // Serial communication with ESP8266
    dht.begin();
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW);
}

void loop() {
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();
    int soilMoisture = analogRead(SOIL_SENSOR);

    // Send data to ESP8266
    Serial.print(temperature);
    Serial.print(",");
    Serial.print(humidity);
    Serial.print(",");
    Serial.print(soilMoisture);
    Serial.println();

    delay(2000); // Send data every 2 seconds

    // Relay control via Serial commands
    if (Serial.available()) {
        String command = Serial.readStringUntil('\n');
        command.trim();
        if (command == "OFF") {
            digitalWrite(RELAY_PIN, HIGH);
        } else if (command == "ON") {
            digitalWrite(RELAY_PIN, LOW);
        }
    }
}