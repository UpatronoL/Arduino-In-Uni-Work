int readpin=A0, ledpin=13;
int val;

void setup() {
  // put your setup code here, to run once:

  pinMode(readpin,INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  val = analogRead(readpin);
  if(val < 300) digitalWrite(ledpin, HIGH);
  else digitalWrite(ledpin,LOW);
  delay(100);

}