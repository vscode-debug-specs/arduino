#include <Arduino.h>

int num = 0;

void setup()
{
    pinMode(PB13, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(PB13, HIGH);
    delay(1000);
    digitalWrite(PB13, LOW);
    delay(200);

    Serial.print("Y:");
    Serial.println(num);
    num++;
}
