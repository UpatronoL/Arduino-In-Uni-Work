int speakPin=13, readpin=A0;
int del=500;
int valpin;

void setup() {
  // put your setup code here, to run once:

  pinMode(13,OUTPUT);
  pinMode(readpin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  valpin=analogRead(readpin);
  Serial.println(valpin);
  int time = valpin*(1000./1023.)

  digitalWrite(speakPin, HIGH);
  delayMicroseconds(time);
  digitalWrite(speakPin, LOW);
  delayMicroseconds(time);

}
