const int Y_PIN = A0;
const int LED_PIN = 2;

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
        digitalWrite(LED_PIN, 0);
    }
    else
    {
        digitalWrite(LED_PIN, 1);
    }

    delay(100);
}
