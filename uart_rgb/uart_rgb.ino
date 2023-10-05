int incomingByte = 0;

struct PinLayout {
  const int redLED = 3;
  const int greenLED = 5;
  const int blueLED = 6;
};

PinLayout pin;

void setup() {
  Serial.begin(9600);
  pinMode(pin.redLED, OUTPUT);
  pinMode(pin.greenLED, OUTPUT);
  pinMode(pin.redLED, OUTPUT);
}

void loop() {

  if (Serial.available() > 0) {
    incomingByte = Serial.read();
  }

  switch (incomingByte)
  {
  case 82:
    digitalWrite(pin.redLED, HIGH);
    break;
  case 114:
    digitalWrite(pin.redLED, LOW);
    break;
  case 71:
    digitalWrite(pin.greenLED, HIGH);
    break;
  case 103:
    digitalWrite(pin.greenLED, LOW);
    break;
  case 66:
    digitalWrite(pin.blueLED, HIGH);
    break;
  case 98:
    digitalWrite(pin.blueLED, LOW);
    break;
  default:
    break;
  }
  incomingByte = -1;
}