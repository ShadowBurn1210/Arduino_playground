#include <Arduino.h>
#include "ultrasonic.h"


const int trigPin = 9;
const int echoPin = 10;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  ultrasonicLoop();
}
