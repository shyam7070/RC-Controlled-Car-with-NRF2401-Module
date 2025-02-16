
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9, 10); // CE, CSN

const uint64_t address = 0xF0F0F0F0E1LL;

// Pins for joystick
const int joyXPin = A0;
const int joyYPin = A1;
const int joySWPin = 8;

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.setDataRate(RF24_250KBPS);
  radio.openWritingPipe(address);
  pinMode(joySWPin, INPUT_PULLUP);
}

void loop() {
  char command = getCommandFromController();
  radio.write(&command, sizeof(command));
  Serial.print("Sent Command: ");
  Serial.println(command);
  delay(100);
}

char getCommandFromController() {
  int xVal = analogRead(joyXPin);
  int yVal = analogRead(joyYPin);
  
  if (xVal < 300) {
    return 'L';
  } else if (xVal > 700) {
    return 'R';
  } else if (yVal < 300) {
    return 'F';
  } else if (yVal > 700) {
    return 'B';
  } else {
    return 'S';
  }
}
