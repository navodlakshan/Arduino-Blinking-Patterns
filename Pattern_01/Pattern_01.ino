int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop() {

  int time = 500;

  digitalWrite(led1, HIGH);
  delay(time);
  digitalWrite(led1, LOW);
  delay(time);

  digitalWrite(led2, HIGH);
  delay(time);
  digitalWrite(led2, LOW);
  delay(time);

  digitalWrite(led3, HIGH);
  delay(time);
  digitalWrite(led3, LOW);
  delay(time);

  digitalWrite(led4, HIGH);
  delay(time);
  digitalWrite(led4, LOW);
  delay(time);

  digitalWrite(led5, HIGH);
  delay(time);
  digitalWrite(led5, LOW);
  delay(time);

  digitalWrite(led6, HIGH);
  delay(time);
  digitalWrite(led6, LOW);
  delay(time);

}
