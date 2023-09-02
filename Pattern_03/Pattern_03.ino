void setup() {
  // put your setup code here, to run once:

  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int time=100;

    digitalWrite(1, HIGH);
    delay(time);
    digitalWrite(1, LOW);

    digitalWrite(6, HIGH);
    delay(time);
    digitalWrite(6, LOW);

    digitalWrite(2, HIGH);
    delay(time);
    digitalWrite(2, LOW);

    digitalWrite(5, HIGH);
    delay(time);
    digitalWrite(5, LOW);

    digitalWrite(3, HIGH);
    delay(time);
    digitalWrite(3, LOW);

    digitalWrite(4, HIGH);
    delay(time);
    digitalWrite(4, LOW);
}
