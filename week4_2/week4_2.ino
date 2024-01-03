int readpin=A1, maxVal=0, minVal=1023;
float val, outputVal, conval;

void setup() {
  // put your setup code here, to run once:

  pinMode(readpin,INPUT);
  Serial.begin(9600);

}

float mymap(float value, float inMin, float inMax, float outMin, float outMax)
{
  float result =(value - inMin)*(outMax-outMin)/(inMax-inMin)+outMin;
  return result;
}

void loop() {
  // put your main code here, to run repeatedly:

  val = analogRead(readpin);
  conval = val*(500./1023.);
  if(val > maxVal) maxVal = val + 1;
  if(val < minVal) minVal = val - 1;
  outputVal = mymap(val, minVal, maxVal, 0, 100);
  Serial.println(outputVal);
  delay(250);

}