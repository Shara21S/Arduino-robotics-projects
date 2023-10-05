int Darksensor = A0;
int IRsensor = A5;
int light = 11;
int motor2= 9; // left side one
int motor1 = 10; // motor 1 is the right side one


int reading = A5;
int reading1 = 0;
int Darkreading = 0;
int Irreading = 0;
int lightB = 50;


void setup() {
  Serial.begin(9600);
  pinMode(Darksensor, INPUT);
  pinMode(IRsensor, INPUT);
  pinMode(light, OUTPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(reading, INPUT);

}
void loop() {
    analogWrite(light, lightB); // for adjusting the brightness of the bulb
    Darkreading = analogRead(Darksensor); // All this is for assigning the sensor names and printing in serial printer properly with 1 second delay
    Serial.println("Dark (left) sensor ");
    Serial.println(Darkreading);
    Irreading = analogRead(IRsensor);
    Serial.println(" IR sensor Right sensor ");
    Serial.println(Irreading);
    //delay(2000);


if 


    if ((Darkreading < 100) && (Irreading > 700)) { // condition for forward motion
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, HIGH);
    }
    else if ((Darkreading  > 700) && (Irreading > 700)) { // condition for turning left
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
    }
    else if ((Darkreading < 700) && (Irreading < 700 )) { // condition for turning right
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
    }
    else if ((Darkreading > 700 ) && (Irreading < 100)){ // when both on white and go straight
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
    }
}
