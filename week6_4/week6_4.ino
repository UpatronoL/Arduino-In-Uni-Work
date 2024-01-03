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

void setLED(int pattern){
  if (0b0001 & pattern) digitalWrite(greenled2,HIGH); else digitalWrite(greenled2,LOW);
  if (0b0010 & pattern) digitalWrite(greenled1,HIGH); else digitalWrite(greenled1,LOW);
  if (0b0100 & pattern) digitalWrite(redled2,HIGH); else digitalWrite(redled2,LOW);
  if (0b1000 & pattern) digitalWrite(redled1,HIGH); else digitalWrite(redled1,LOW);
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

  setLED(0b0001);  delay(100);
  setLED(0b0010);  delay(100);
  setLED(0b0100);  delay(100);
  setLED(0b1000);  delay(100);
}