int redled1 = 9, redled2=10, greenled1 = 11, greenled2 = 12, readpin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redled1,OUTPUT);
  pinMode(redled2,OUTPUT);
  pinMode(greenled1,OUTPUT);
  pinMode(greenled2,OUTPUT);
  pinMode(readpin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int val = analogRead(A0);
  if (val <= 200) digitalWrite(redled1, LOW); else digitalWrite(redled1, HIGH);
  if (val <= 400) digitalWrite(redled2, LOW); else digitalWrite(redled2, HIGH);
  if (val <= 600) digitalWrite(greenled1, LOW); else digitalWrite(greenled1, HIGH);
  if (val <= 800) digitalWrite(greenled2, LOW); else digitalWrite(greenled2, HIGH);
  
}
