int redled1 = 5, redled2=6, greenled1 = 9, greenled2 = 10, readpin = A0;

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
  if (0b0001 & pattern) analogWrite(greenled2,255/2); else analogWrite(greenled2,0);
  if (0b0010 & pattern) analogWrite(greenled1,255/4); else analogWrite(greenled1,0);
  if (0b0100 & pattern) analogWrite(redled2,255/8); else analogWrite(redled2,0);
  if (0b1000 & pattern) analogWrite(redled1,255/16); else analogWrite(redled1,0);
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

  setLED(0b0100);

}