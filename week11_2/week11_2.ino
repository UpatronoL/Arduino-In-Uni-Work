#define SSN 10
#define MOSI 11
#define MISO 12
#define SCK 13

void setup() {
  Serial.begin(9600);
  pinMode(SSN, OUTPUT); digitalWrite(SSN,HIGH);
  pinMode(MOSI, OUTPUT);
  pinMode(MISO, INPUT);
  pinMode(SCK, OUTPUT); digitalWrite(SCK, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(readADC(2));
  delay(250);
}

int readADC(unsigned char channel)
{
  digitalWrite(SSN, LOW);

  sendBIT(1);
  sendBIT(1);

  sendBIT(channel >> 2);
  sendBIT(channel >> 1);
  sendBIT(channel);

  sendBIT(0);
  sendBIT(0);

  int advalue = 0;
  for (int i = 0; i < 12; ++i) {
  advalue = (advalue << 1) + recvBit();
  }
  digitalWrite(SSN, HIGH);
  return advalue;
}

void sendBIT(int value)
{
  digitalWrite(MOSI, value & 1);
  digitalWrite(SCK, HIGH);
  digitalWrite(SCK, LOW);
}

int recvBit(void)
{
  digitalWrite(SCK, HIGH);
  int bit = digitalRead(MISO);
  digitalWrite(SCK, LOW);
  return bit;
}
