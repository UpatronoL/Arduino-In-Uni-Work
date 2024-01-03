#include <SPI.h>
const int SSN = 10;
int speakPin=7;
int valpin;
int echo = 5, trig = 6;
void setup() {
  Serial.begin(9600);
  pinMode(SSN, OUTPUT); digitalWrite(SSN,HIGH);
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV16);
  SPI.setDataMode(SPI_MODE0);
  SPI.setBitOrder(MSBFIRST);
}

void loop() {
  valpin=readADC(0);
  tone(speakPin,valpin);
  Serial.println(readADC(0));
  delay(100);
}

int readADC(unsigned char channel)
{
  digitalWrite(SSN, LOW);
  int adval = 0;
  SPI.transfer(0b00000110 + ((channel >> 2) & 1));
  adval = ((unsigned char)SPI.transfer(channel << 6) & 0b00001111) << 8;
  adval |= ((unsigned char)SPI.transfer(0));
  digitalWrite(SSN, HIGH);
  return adval;
}

void pulse(int pin)
{
  digitalWrite(pin, LOW);
  delayMicroseconds(10);
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
}
