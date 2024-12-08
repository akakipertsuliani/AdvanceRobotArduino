#include <Servo.h>
#include <Stepper.h>
#include <IRremote.h>

Servo ulrasonicServo;
Servo upDownControlServo;
Servo leftRightControlServo;

#define STEP 100
Stepper handRotationStepper(STEP, A2, A3, A4, A5);

#define IRpin 13

IRrecv remoteRecv(IRpin);
decode_results remoteCode;

#define trig A0
#define echo A1

#define FrontDCmotorN1 2
#define FrontDCmotorN2 3
#define FrontDCmotorN3 4
#define FrontDCmotorN4 5

#define BackDCmotorN1 6
#define BackDCmotorN2 7
#define BackDCmotorN3 8
#define BackDCmotorN4 9


void setup() {
  Serial.begin(9600);
  remoteRecv.enableIRIn();

  ulrasonicServo.attach(10);
  upDownControlServo.attach(11);
  leftRightControlServo.attach(12);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  for (int i = 2; i < 9; i++) {
    pinMode(i, OUTPUT);
  }

  handRotationStepper.setSpeed(30);

  ulrasonicServo.write(90);
  upDownControlServo.write(90);
  leftRightControlServo.write(90);

  delay(1000);
}

void loop() {
}
