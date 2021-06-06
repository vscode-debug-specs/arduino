#include <Arduino.h>
// #include <M5Stack.h>

const int LED_PIN = 2;
int num = 0;

void setup()
{
  // M5.begin();
  // M5.Power.begin();
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (num % 2 == 0)
  {
    // M5.Lcd.fillScreen(WHITE);
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    // M5.Lcd.fillScreen(GREEN);
    digitalWrite(LED_PIN, LOW);
  }
  num++;
  Serial.print("num:");
  Serial.println(num);
  delay(1000);
}
