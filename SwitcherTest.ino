// defines pins numbers
const int trigPin = 16;
const int echoPin = 14;
const int led = 8;
const int mot = 4;
int buzz = 9;
int d;
int bt1 = 7;
int bt2 = 6;
int btcheck = 3;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(mot, OUTPUT);
  pinMode(bt1, INPUT_PULLUP);
  pinMode(bt2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(bt2) == LOW) {
    btcheck = 0;
  }
  else if (digitalRead(bt1) == LOW) {
    btcheck = 1;
  }

  if (btcheck == 1) {
    long duration, distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;
    if (distance <= 50 && distance > 0) {
      d = map(distance, 1, 100, 20, 2000);
      digitalWrite(mot, HIGH);
      delay(100);
      digitalWrite(mot, LOW);
      delay(d);
    }
    else {
      digitalWrite(led, LOW);
      digitalWrite(buzz, LOW);
      digitalWrite(mot, LOW);
    }
    if (distance >= 200 || distance <= 0) {
      Serial.println("Out of range");
    }
    else {
      Serial.print(distance);
      Serial.println(" cm");
      Serial.println(d);
    }
  }

  if (btcheck == 0) {
    long duration, distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;
    if (distance <= 50 && distance > 0) {
      d = map(distance, 1, 100, 20, 2000);
      digitalWrite(buzz, HIGH);
      digitalWrite(led, HIGH);
      delay(100);
      digitalWrite(buzz, LOW);
      digitalWrite(led, LOW);
      delay(d);
    }
    else {
      digitalWrite(led, LOW);
      digitalWrite(buzz, LOW);
      digitalWrite(mot, LOW);
    }
    if (distance >= 200 || distance <= 0) {
      Serial.println("Out of range");
    }
    else {
      Serial.print(distance);
      Serial.println(" cm");
      Serial.println(d);
    }
  }
}
