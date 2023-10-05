int motor1= 9;
int motor2 = 10;
int reading = A5;
int reading1 = 0;

void setup() {
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(reading, INPUT);
  Serial.begin(9600);
}

void loop() {
  reading1 = analogRead(reading);
  Serial.println(reading1);
  if (reading1 < 760) {
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, HIGH);
  }
  else {
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, LOW);
  }
  delay(100);
  

}
