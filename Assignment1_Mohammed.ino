/*
  Assignment 1 – Task 5: Smart Countdown
  Programming C++ for Engineers Using Arduino

  Features:
  - Variables
  - Functions with parameters
  - while loops
  - Built-in LED control
  - Serial Monitor communication
  - Runs once inside setup()
*/

int startValue = 5;           // Countdown starting number
int ledPin = 13;              // Built-in LED pin

// Function to flash the LED a specified number of times
void flashLED(int times)
{
    int flashCounter = 0;

    while (flashCounter < times)
    {
        digitalWrite(ledPin, 1);  // HIGH or 1 
        delay(250);

        digitalWrite(ledPin, 0);  // LOW or 0
        delay(250);

        flashCounter++;
    }
}

void setup()
{
    // Initialize LED and Serial communication
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);

    // Starting message
    Serial.println("=== Smart Countdown Starting ===");

    int currentCount = startValue;

    // Countdown loop
    while (currentCount >= 1)
    {
        Serial.print("Count: ");
        Serial.println(currentCount);

        // Blink LED according to the current count
        flashLED(currentCount);

        // Pause before moving to the next number
        delay(1000);

        currentCount--;
    }

    // Completion message
    Serial.println("=== Countdown Complete ===");
}

void loop()
{
    //  left empty
}