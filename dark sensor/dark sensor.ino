int reading = A0;
int reading1 = 0;
int led = 13;


void setup() {
  //pinMode(reading, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  reading1 = analogRead(reading);
  Serial.println(reading1);
  if (reading1 > 760)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);

}
