int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  analogWrite(7, brightness);
  brightness = brightness + fadeAmount;
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);  // Adjust the delay for speed
}
