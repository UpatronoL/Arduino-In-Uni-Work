const int CLR=2,
          CLK=3, 
          D  =4;

void setup() {
  // put your setup code here, to run once:
  pinMode(CLR, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(D, OUTPUT);
  digitalWrite(CLR, HIGH);
  digitalWrite(CLK, LOW);
  digitalWrite(D, LOW);
  negPulse(CLR);
}
int pattern[]={
  0b11111111,
  0b01010101,

  };

#define indexableSize(A) (sizeof(A) / sizeof(*A))

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < indexableSize(pattern); i++) {
  setLEDs(pattern[i]);
  delay(1);
  }
  delay(10);
  setLEDs(0b00000000);
  delay(100);
}

void setLEDs(int pattern){
  for (int i = 0; i<8; i++) {
    digitalWrite(D, pattern & 1);
    posPulse(CLK);
    pattern >>= 1;
  }
}


void Blink(int pin){
  for (int i=0; i<8; i++){
    digitalWrite(pin, HIGH);
    posPulse(CLK);
    digitalWrite(pin, LOW);
  }
  delay(100);
  for (int i =0 ; i<8; i++) {
    digitalWrite(pin, LOW);
    posPulse(CLK);
    digitalWrite(pin, HIGH);
  }
  delay(500);
}

void posPulse(int pin){
  digitalWrite(pin, HIGH);
  digitalWrite(pin, LOW);
}

void negPulse(int pin){
  digitalWrite(pin, LOW);
  digitalWrite(pin, HIGH);
}