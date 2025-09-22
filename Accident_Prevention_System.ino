#include <SoftwareSerial.h>

// Define for temperature sensor
int sensorInput;
int tempsensePin = A4;
int temp;
int ledPin_temp = 3;
int threshold_temperature = 15;

// Define eye blink sensor
int IRSensor = 2;
int BUZZER = 13;

// Define alcohol sensor
const int MQ3 = 0;
const int motor = 9;
int value;

void setup() {
  Serial.begin(9600);

  // Setup for temperature
  pinMode(tempsensePin, INPUT);
  pinMode(sensorInput, INPUT);
  pinMode(ledPin_temp, OUTPUT);

  // Setup for eye blink sensor
  pinMode(IRSensor, INPUT);
  pinMode(BUZZER, OUTPUT);

  // Setup for alcohol sensor
  pinMode(MQ3, INPUT);
  pinMode(motor, OUTPUT);

  digitalWrite(BUZZER, LOW);
  digitalWrite(motor, LOW);
  digitalWrite(ledPin_temp, LOW);
}

void loop() {
  // Temperature sensor detection and prevention by red light
  sensorInput = analogRead(A4);
  temp = sensorInput * 0.048828125;

  // Eye blink sensor detection
  int statusSensor = digitalRead(IRSensor);

  // Alcohol sensor detection
  value = analogRead(MQ3);
  Serial.print("Alcohol concentration is: ");
  Serial.println(value);

  // Temperature check
  if (temp > threshold_temperature) {
    digitalWrite(ledPin_temp, HIGH);
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println("C");
    Serial.println();
    Serial.println("Warning!!!");
    Serial.println("Temperature is High");
    delay(2000);
  } else {
    digitalWrite(ledPin_temp, LOW);
    Serial.println("Temp is fine");
    delay(1000);
  }

  // Eye blink check
  if (statusSensor == 1) {
    digitalWrite(BUZZER, LOW);
  } else {
    digitalWrite(BUZZER, HIGH);
  }

  // Alcohol check
  if (value > 700) {
    digitalWrite(motor, LOW);
  } else {
    digitalWrite(motor, HIGH);
  }

  delay(500);
}
