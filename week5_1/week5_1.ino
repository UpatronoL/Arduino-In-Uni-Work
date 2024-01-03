int ledpin1=2, ledpin2=3;
int readpin=A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(readpin,INPUT);
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ta = analogRead(A0);
  int tb = 1023 - ta; 
  digitalWrite(ledpin1,HIGH);
  digitalWrite(ledpin2,LOW);
  delayMicroseconds(ta);
  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,HIGH);
  delayMicroseconds(tb);
}