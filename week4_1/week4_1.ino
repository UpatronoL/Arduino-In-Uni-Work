int readpin=A0, maxVal=0, minVal=1023;
int val, outputVal;

void setup() {
  // put your setup code here, to run once:

  pinMode(readpin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  val = analogRead(readpin);
  if(val > maxVal) maxVal = val + 1;
  if(val < minVal) minVal = val - 1;
  outputVal = map(val, minVal, maxVal, 0, 100);
  Serial.println(outputVal);
  delay(250);

}