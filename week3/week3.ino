int readval1, readval2, readpin1=A0, readpin2=A1 ;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  //pinMode(readpin1,INPUT);
  //pinMode(readpin2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  readval1=analogRead(readpin1);
  readval2=analogRead(readpin2);
//  Serial.print("first potensiomiter val: ");
  Serial.print(readval1);
  Serial.print(" ");
//  Serial.print("second potensiomiter val: ");
  Serial.println(readval2);
  delay(100);

}