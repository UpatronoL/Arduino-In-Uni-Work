void setup() {

DDRD = 0b11111111; 
DDRB = 0b00111111;
DDRC = 0b00111111;
}

void loop() {
  movingDot();
}

void movingDot(){
 setLEDs(0b1);
 long a=31;
 for (int i=0; i<21; i++){
  setLEDs(a);
  a = a >> 1;
  delay(20);
 }
}

void setLEDs(long pattern){

 PORTD = (pattern);
 PORTB = (pattern >> 8);
 PORTC = (pattern >> 14);
}







