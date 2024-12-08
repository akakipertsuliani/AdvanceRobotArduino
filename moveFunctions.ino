void moveForward() {
  digitalWrite(FrontDCmotorN1, HIGH);
  digitalWrite(FrontDCmotorN2, LOW);
  digitalWrite(FrontDCmotorN3, HIGH);
  digitalWrite(FrontDCmotorN4, LOW);

  digitalWrite(BackDCmotorN1, HIGH);
  digitalWrite(BackDCmotorN2, LOW);
  digitalWrite(BackDCmotorN3, HIGH);
  digitalWrite(BackDCmotorN4, LOW);
}

void moveBackward() {
  digitalWrite(FrontDCmotorN1, LOW);
  digitalWrite(FrontDCmotorN2, HIGH);
  digitalWrite(FrontDCmotorN3, LOW);
  digitalWrite(FrontDCmotorN4, HIGH);

  digitalWrite(BackDCmotorN1, LOW);
  digitalWrite(BackDCmotorN2, HIGH);
  digitalWrite(BackDCmotorN3, LOW);
  digitalWrite(BackDCmotorN4, HIGH);
}

void rotateLeft() {
  digitalWrite(FrontDCmotorN1, LOW);
  digitalWrite(FrontDCmotorN2, LOW);
  digitalWrite(FrontDCmotorN3, LOW);
  digitalWrite(FrontDCmotorN4, HIGH);

  digitalWrite(BackDCmotorN1, LOW);
  digitalWrite(BackDCmotorN2, LOW);
  digitalWrite(BackDCmotorN3, LOW);
  digitalWrite(BackDCmotorN4, HIGH);
}

void rotateRight() {
  digitalWrite(FrontDCmotorN1, LOW);
  digitalWrite(FrontDCmotorN2, HIGH);
  digitalWrite(FrontDCmotorN3, LOW);
  digitalWrite(FrontDCmotorN4, LOW);

  digitalWrite(BackDCmotorN1, LOW);
  digitalWrite(BackDCmotorN2, HIGH);
  digitalWrite(BackDCmotorN3, LOW);
  digitalWrite(BackDCmotorN4, LOW);
}

void stopMotor() {
  digitalWrite(FrontDCmotorN1, LOW);
  digitalWrite(FrontDCmotorN2, LOW);
  digitalWrite(FrontDCmotorN3, LOW);
  digitalWrite(FrontDCmotorN4, LOW);

  digitalWrite(BackDCmotorN1, LOW);
  digitalWrite(BackDCmotorN2, LOW);
  digitalWrite(BackDCmotorN3, LOW);
  digitalWrite(BackDCmotorN4, LOW);
}