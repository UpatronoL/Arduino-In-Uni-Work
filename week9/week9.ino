
#include <TimerOne.h>

void setup() {
  // put your setup code here, to run once:
  for(int i= 0;  i <= 12;  i += 1)
    pinMode(i, OUTPUT);
  digitalWrite(10, HIGH); //green
  digitalWrite(11, HIGH); //blue
  digitalWrite(12, HIGH); //red
  Timer1.attachInterrupt(background);
  Timer1.initialize(1000);
}

volatile int value = 0;
int segment = 0;

void setLED(int segment, int colour){
  if (0 == colour) digitalWrite(segment, LOW); 
  else digitalWrite(segment, HIGH); 
  if (0 == (colour & 1))digitalWrite(12, HIGH); 
  else  digitalWrite(12, LOW);
  if (0 == (colour & 2))digitalWrite(10, HIGH);
  else  digitalWrite(10, LOW);
  if (0 == (colour & 4))digitalWrite(11, HIGH); 
  else  digitalWrite(11, LOW);
  }


void displayValue(void){
  for (int segment = 0;  segment < 10;  ++segment){
      if (value <= segment) return;int colour = 2;
      if (segment >= 6) colour= 6;
      if (segment >= 9) colour= 1;
      setLED(segment, colour);
      delay(1);
      setLED(segment, 0);
    }
  }
int ledColours[10] = {0, 1, 2, 3, 4, 5, 6, 7, 1, 2};

void background(void) {
  setLED(segment, 0); 
  segment += 1;
  if (segment > 9) segment = 0;
  if (value <= segment) return;
  int colour = ledColours[segment];
  setLED(segment, colour);      
}

void loop(void){
  value = 5;
  for (int i= 0;  i <= 9;  ++i){
    ledColours[i] = ledColours[i]-1;
    if (ledColours[i]<0) {
    ledColours[i]=7;
    delay(100);
    }
  }
}
