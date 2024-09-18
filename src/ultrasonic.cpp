#include <Arduino.h>
#include "ultrasonic.h"

const int trigPin = 9;
const int echoPin = 10;

float duration, distance;

void ultrasonicLoop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * .0343) / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(3000);
}
