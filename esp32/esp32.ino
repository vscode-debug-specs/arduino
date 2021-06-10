#include <Arduino.h>

const int LED_PIN = GPIO_NUM_2;
int num = 0;

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    if (num % 2 == 0)
    {
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
    }
    num++;
    Serial.print("num:");
    Serial.println(num);
    delay(1000);
}
