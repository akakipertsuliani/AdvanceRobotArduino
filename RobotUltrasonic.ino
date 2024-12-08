void robotUltrasonic() {
  int distance = getDistance();

  ulrasonicServo.write(90);
  moveForward();

  if (distance <= 50) {
    stopMotor();
    int distanceLeft = checkDirection(180);
    int distanceRight = checkDirection(0);

    if (distanceLeft > distanceRight) {
      rotateRight();
    } else if (distanceLeft < distanceRight) {
      rotateLeft();
    } else {
      rotateRight();
    }

    delay(250);
  }
}

int checkDirection(int angle) {
  ulrasonicServo.write(angle);
  delay(250);
  return getDistance();
}

int getDistance() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  int duration = pulseIn(echo, HIGH);
  int distance = duration * 0.034 / 2;

  return distance;
}