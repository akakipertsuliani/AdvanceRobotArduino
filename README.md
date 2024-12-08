# Advanced Robot Control

This project involves building and controlling an Arduino-based robot. The robot has four wheels, and on top of it is a simple hand made from sticks. The hand is operated using two servos and one stepper motor. The robot can be controlled remotely or set to move autonomously. Currently, the hand functionality is not fully implemented, but the robot can navigate a room without collisions. It is compatible with Arduino Uno, Nano, and other similar boards.

## Assembly Instructions

### Components Required:
- **Two L298N motor drivers** (for controlling the four wheels)
- **One stepper motor** (for hand motion)
- **Three servo motors**:
  - One for ultrasonic sensor control
  - One for lifting the hand up and down
  - One for opening and closing the hand
- **IR remote and sensor** (for remote control)
- **Ultrasonic sensor** (for obstacle detection)

### Wiring Guide:
1. **L298N Motor Drivers**:
   - Front wheels (connect to Arduino pins):  
     - N1 → D2  
     - N2 → D3  
     - N3 → D4  
     - N4 → D5  
   - Back wheels (connect to Arduino pins):  
     - N1 → D6  
     - N2 → D7  
     - N3 → D8  
     - N4 → D9  
2. **Stepper Motor**:
   - Connect pins:  
     - N1 → A2  
     - N2 → A3  
     - N3 → A4  
     - N4 → A5  
3. **Servo Motors**:
   - Ultrasonic sensor servo → D10  
   - Hand lift servo → D11  
   - Hand open/close servo → D12  
4. **IR Remote Sensor**:
   - Signal pin → D13  
5. **Ultrasonic Sensor**:
   - Trig pin → A0  
   - Echo pin → A1  

### Power Recommendations:
- Use an external battery with more than 5V for the motors.  
  **Important**: Do not connect the motor controller directly to the Arduino power supply, as it may damage the Arduino.  
- Use a 9V battery to power the Arduino.  
- Ensure all components share the same ground by connecting the Arduino and external power supply grounds together.  
- Servo motors can use the 5V power supply from the Arduino.

---

## Programming Instructions

### Setting Up the Code:
1. **Remote Control Codes**:
   - To identify the remote control codes, include this function in your `loop()`:
     ```cpp
     void loop() {
         remoteCodes();
     }
     ```
   - Press buttons on your remote and observe the Serial Monitor to capture the unique codes.
   - Use these codes in the `remoteControl()` function by replacing the placeholders with your captured codes.

2. **Example `remoteControl()` Function**:
   ```cpp
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

           remoteRecv.resume(); // Ready for the next code
       }
   }
   ```
   Replace the case numbers with the codes from your remote.

3. **Autonomous Mode**:
   - If you want the robot to move autonomously without remote control, call the `robotUltrasonic()` function in the `loop()`:
     ```cpp
     void loop() {
         robotUltrasonic();
     }
     ```
   - Upload the code, and the robot will start navigating the room autonomously.

---

## Notes:
- Ensure all wiring and connections are secure before powering the robot.
- Avoid running the motors or servos on the Arduino power supply to prevent damage.
- Test each module (motors, servos, sensors) separately before integrating them into the robot.

    