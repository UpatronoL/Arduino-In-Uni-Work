int redled1 = 6, redled2=7, greenled1 = 8, greenled2 = 9, readpin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redled1,OUTPUT);
  pinMode(redled2,OUTPUT);
  pinMode(greenled1,OUTPUT);
  pinMode(greenled2,OUTPUT);
  pinMode(readpin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(redled1,HIGH);
  delay(100);
  digitalWrite(redled2,HIGH);
  delay(100);
  digitalWrite(greenled1,HIGH);
  delay(100);
  digitalWrite(greenled2,HIGH);
  delay(100);
  digitalWrite(redled1,LOW);
  delay(100);
  digitalWrite(redled2,LOW);
  delay(100);
  digitalWrite(greenled1,LOW);
  delay(100);
  digitalWrite(greenled2,LOW);
  delay(100);

  
}
