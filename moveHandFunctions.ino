int upAndDownDegree = 90;
int openAndCloseDegree = 90;

void rotateHandLeft() {
  handRotationStepper.step(STEP);
}

void rotateHandRight() {
  handRotationStepper.step(-STEP);
}

void liftHand() {
  if (upAndDownDegree <= 180) {
    upDownControlServo.write(upAndDownDegree);
    upAndDownDegree++;
    delay(50);
  }
}

void lowerHand() {
  if (upAndDownDegree >= 0) {
    upDownControlServo.write(upAndDownDegree);
    upAndDownDegree--;
    delay(50);
  }
}

void openHand() {
  if (openAndCloseDegree >= 90) {
    upDownControlServo.write(openAndCloseDegree);
    openAndCloseDegree++;
    delay(50);
  }
}

void closeHand() {
  if (openAndCloseDegree <= 180) {
    upDownControlServo.write(openAndCloseDegree);
    openAndCloseDegree--;
    delay(50);
  }
}