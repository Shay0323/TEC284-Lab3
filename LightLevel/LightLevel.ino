void setup() {
  pinMode(A6, INPUT);
  pinMode(4, OUTPUT);
  int lightlevel = analogRead(A6);
  Serial.begin(9600);
  Serial.println(lightlevel);
  if (lightlevel < 100) {
    Serial.println("Its really dark!");
    digitalWrite(4, HIGH);
  }
  else if (lightlevel < 200) {
    Serial.println("Its dim in here");
  }
  else if (lightlevel < 700) {
    Serial.println("Its a little bright");
  }
  else if (lightlevel < 1024) {
    Serial.println("Its really bright!");
  }


}

void loop() {
  // put your main code here, to run repeatedly:

}
