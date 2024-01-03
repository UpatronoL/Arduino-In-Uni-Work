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

void enableLEDs(int pattern){
  if (0b0001 & pattern) digitalWrite(greenled2,HIGH);
  if (0b0010 & pattern) digitalWrite(greenled1,HIGH);
  if (0b0100 & pattern) digitalWrite(redled2,HIGH);
  if (0b1000 & pattern) digitalWrite(redled1,HIGH);
}

void disableLEDs(int pattern){
  if (0b0001 & ~pattern) digitalWrite(greenled2,LOW);
  if (0b0010 & ~pattern) digitalWrite(greenled1,LOW);
  if (0b0100 & ~pattern) digitalWrite(redled2,LOW);
  if (0b1000 & ~pattern) digitalWrite(redled1,LOW);
}

void setLED(int pattern){
  if(pattern != 0b1000) pattern = pattern << 1;
  if (0b0001 & pattern) enableLEDs(pattern); else disableLEDs(pattern);
  if (0b0010 & pattern) enableLEDs(pattern); else disableLEDs(pattern);
  if (0b0100 & pattern) enableLEDs(pattern); else disableLEDs(pattern);
  if (0b1000 & pattern) enableLEDs(pattern); else disableLEDs(pattern);
  Serial.println();
}

void left(int pattern){
  setLED(pattern);
  setLED(pattern<<1);
  setLED(pattern<<2);
  setLED(pattern<<3);
}

void right(int pattern){
  setLED(pattern);
  setLED(pattern>>1);
  setLED(pattern>>2);
  setLED(pattern>>3);
}

void setLEDs(int pattern){
  if(pattern == 0b0001) left(pattern);
  if(pattern == 0b1000) right(pattern);
}

void loop() {
  // put your main code here, to run repeatedly:

  int a = 0b0001;
  setLEDs(a);
}