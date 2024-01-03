int redled1 = 2, redled2=3, greenled1 = 4, greenled2 = 5, readpin = A0;

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
  digitalWrite(redled1,LOW);
  digitalWrite(redled2,HIGH);
  delay(100);
  digitalWrite(redled2,LOW);
  digitalWrite(greenled1,HIGH);
  delay(100);
  digitalWrite(greenled1,LOW);
  digitalWrite(greenled2,HIGH);
  delay(100);
  digitalWrite(greenled2,LOW);
  digitalWrite(greenled1,HIGH);
  delay(100);
  digitalWrite(greenled1,LOW);
  digitalWrite(redled2,HIGH);
  delay(100);
  digitalWrite(redled2,LOW);
  
}
