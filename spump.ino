#include <AccelStepper.h>

AccelStepper stepper(AccelStepper::DRIVER, 3, 2);

#define buttonPin 4
#define limitSwitchPin 5
#define ledRedPin 6
#define ledGreenPin 7
#define ledBluePin 8
#define counterClockwiseButton 9
#define clockwiseButton 10
int potPin = A0;
double potVal = 0; // 0 - 1023
double const syrDiameter = 20.87; // Large syringe is 20.87 mm; Small syringe is 15.98 mm
int const flowRate = 20;
int speedSteps;

void setup()
{
  //Initialize input and output pins
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(limitSwitchPin, INPUT_PULLUP);
  pinMode(ledGreenPin, OUTPUT);
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledBluePin, OUTPUT);
  pinMode(potPin, INPUT);
  pinMode(counterClockwiseButton, INPUT_PULLUP);
  pinMode(clockwiseButton, INPUT_PULLUP);
  // Setting speed
  stepper.setMaxSpeed(1000);
  Serial.begin(9600);
}

int speedCalc(int flow, double diameter) {
  int Ls;
  int finalSpeed;
  Ls = flow * 4 / (0.001 * 3.14159 * (diameter * diameter));
  finalSpeed = Ls * 200 * 1.15 / (2 * 60);
  return finalSpeed;
}

void loop()
{
  speedSteps = speedCalc(flowRate, syrDiameter);
  potVal = analogRead(potPin);
  if(digitalRead(limitSwitchPin) == LOW) { // if limit switch isn't down
    if (digitalRead(buttonPin) == LOW) { // if the main button isn't down
      digitalWrite(ledRedPin, 0);
      digitalWrite(ledGreenPin, 255); // green
      digitalWrite(ledBluePin, 0);
    } 
    else { // if the main button is pressed (paused)
      digitalWrite(ledRedPin, 255);
      digitalWrite(ledGreenPin, 255); // yellow
      digitalWrite(ledBluePin, 0);
    }
    if (digitalRead(buttonPin) == LOW) { // if the main button isn't down
      potVal /= 1023;
      stepper.setSpeed(potVal * speedSteps);
      stepper.runSpeed(); // run at potentiometer speed
      Serial.println(potVal * 100);
    } 
    else if (digitalRead(counterClockwiseButton) == LOW) { // counterclockwise moves forward
      stepper.setSpeed(speedSteps);
      stepper.runSpeed();
    } 
    else if (digitalRead(clockwiseButton) == LOW) { // clockwise moves backwards
      stepper.setSpeed(-1 * speedSteps);
      stepper.runSpeed();
    }
  } 
  else { // if actively stopped
    digitalWrite(ledRedPin, 255);
    digitalWrite(ledGreenPin, 0); 
    digitalWrite(ledBluePin, 0); // red

    stepper.setSpeed(0);
    if (digitalRead(counterClockwiseButton) == LOW) { 
      stepper.setSpeed(speedSteps);
      stepper.runSpeed();
    } 
    else if (digitalRead(clockwiseButton) == LOW) {
      stepper.setSpeed(-1 * speedSteps);
      stepper.runSpeed();
    }
  }
}
