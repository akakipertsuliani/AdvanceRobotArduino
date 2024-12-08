void remoteCodes(String code) {
  if (remoteRecv.decode(&remoteCode)) {
    long int decode = remoteCode.value;
    Serial.print("Received IR code: ");
    Serial.println(decode, HEX);

    remoteRecv.resume();
  }
}