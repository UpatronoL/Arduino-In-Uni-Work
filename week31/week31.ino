int speakPin=12, readpin=A0;
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
  tone(speakPin,valpin);

}
