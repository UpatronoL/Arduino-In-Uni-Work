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

  int a = 0b0000;
  for(int i; i < 15; i=i+1){
    setLED(a);
    a=a+1;
    delay(200);
  }
}