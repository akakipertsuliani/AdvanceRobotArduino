void remoteControl() {
   if (remoteRecv.decode(&remoteCode)) {
    long int decode = remoteCode.value;
    
    switch (decode) {
      case 2347823432:
        moveForward();
        break;
      case 2347823422:
        moveBackward();
        break;
      case 2347843432:
        rotateLeft();
        break;
      case 2347823732:
        rotateRight();
        break;
      case 2378498323:
        rotateHandLeft();
        break;
      case 5903394539:
        rotateHandRight();
        break;
      case 9789797999:
        liftHand();
        break;
      case 8290348932:
        lowerHand();
        break;
      case 9088797887:
        openHand();
        break;
      case 8978867678:
        closeHand();
        break;
    }

    remoteRecv.resume();
  }
}