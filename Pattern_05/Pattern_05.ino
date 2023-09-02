int redPin = 8;
int greenPin = 7;
int bluePin = 6;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 256; i++) {
    analogWrite(redPin, i);
    analogWrite(greenPin, 255 - i);
    delay(10);
  }
  for (int i = 0; i < 256; i++) {
    analogWrite(greenPin, i);
    analogWrite(bluePin, 255 - i);
    delay(10);
  }
  for (int i = 0; i < 256; i++) {
    analogWrite(bluePin, i);
    analogWrite(redPin, 255 - i);
    delay(10);
  }
}
