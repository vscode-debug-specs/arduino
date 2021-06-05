#include <Arduino.h>

const int Y_PIN = PA1;
const int LED_PIN = PB13;

void setup()
{
    pinMode(Y_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int y;

    y = analogRead(Y_PIN);

    Serial.print("Y:");
    Serial.println(y);

    if (y < 300)
    {
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
    }

    delay(100);
}
