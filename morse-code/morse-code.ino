int t=100;
String message;

void setup() {
  // put your setup code here, to run once:

  pinMode(13,OUTPUT);

}

void dot(){
  digitalWrite(13,HIGH);
  delay(t);
  digitalWrite(13,LOW);
  delay(t);
}

void dash(){
  digitalWrite(13,HIGH);
  delay(3*t);
  digitalWrite(13,LOW);
  delay(3*t);
}

void letter(){
  delay(3*t);
}

void finish(){
  delay(5*t);
}

void sendMorse(char *message){

  int a=0;
  while(0 != message[a]){
    a=a+1;
    if (message[a] == '.'){
      dot();
    }
    else if(message[a] == '-'){
      dash();
    }
    else {
      letter();
    }
  }
  finish();
}

void send(char *me){
  int a=0;
  char S;
  while(0 != me[a]){
    a=a+1;
    if (me[a] == 'A' || me[a] == 'a') sendMorse(".-");
    else if(me[a] == 'B' || me[a] == 'b') sendMorse("-...");
    else if(me[a] == 'C' || me[a] == 'c') sendMorse("-.-.");
    else if(me[a] == 'D' || me[a] == 'd') sendMorse("-..");
    else if(me[a] == 'E' || me[a] == 'e') sendMorse(".");
    else if(me[a] == 'F' || me[a] == 'f') sendMorse("..-.");
    else if(me[a] == 'G' || me[a] == 'g') sendMorse("--.");
    else if(me[a] == 'H' || me[a] == 'h') sendMorse("....");
    else if(me[a] == 'I' || me[a] == 'i') sendMorse("..");
    else if(me[a] == 'J' || me[a] == 'j') sendMorse(".---");
    else if(me[a] == 'K' || me[a] == 'k') sendMorse("-.-");
    else if(me[a] == 'L' || me[a] == 'l') sendMorse(".-..");
    else if(me[a] == 'M' || me[a] == 'm') sendMorse("--");
    else if(me[a] == 'N' || me[a] == 'n') sendMorse("-.");
    else if(me[a] == 'O' || me[a] == 'o') sendMorse("---");
    else if(me[a] == 'P' || me[a] == 'p') sendMorse(".--.");
    else if(me[a] == 'Q' || me[a] == 'q') sendMorse("--.-");
    else if(me[a] == 'R' || me[a] == 'r') sendMorse(".-.");
    else if(me[a] == 'S' || me[a] == 's') sendMorse("...");
    else if(me[a] == 'T' || me[a] == 't') sendMorse("-");
    else if(me[a] == 'U' || me[a] == 'u') sendMorse("..-");
    else if(me[a] == 'V' || me[a] == 'v') sendMorse("...-");
    else if(me[a] == 'W' || me[a] == 'w') sendMorse("---");
    else if(me[a] == 'X' || me[a] == 'x') sendMorse("---");
    else if(me[a] == 'Y' || me[a] == 'y') sendMorse("---");
    else if(me[a] == 'Z' || me[a] == 'z') sendMorse("---");

    else if(me[a] == '1') sendMorse(".----");
    else if(me[a] == '2') sendMorse("..---");
    else if(me[a] == '3') sendMorse("...--");
    else if(me[a] == '4') sendMorse("....-");
    else if(me[a] == '5') sendMorse(".....");
    else if(me[a] == '6') sendMorse("-....");
    else if(me[a] == '7') sendMorse("--...");
    else if(me[a] == '8') sendMorse("---..");
    else if(me[a] == '9') sendMorse("----.");
    else if(me[a] == '0') sendMorse("-----");

    else if(me[a] == ',') sendMorse("--..--");
    else if(me[a] == '.') sendMorse(".-.-.-");
    else if(me[a] == '?') sendMorse("..--..");
    else if(me[a] == ';') sendMorse("-.-.-.");
    else if(me[a] == '%') sendMorse("---...");
    else if(me[a] == '/') sendMorse("-..-.");
    else if(me[a] == '-') sendMorse("-....-");
    else if(me[a] == '"') sendMorse(".-..-.");
    else if(me[a] == '(') sendMorse("-.--.");
    else if(me[a] == ')') sendMorse("-.--.-");
    else if(me[a] == '=') sendMorse("-...-");
    else if(me[a] == '+') sendMorse(".-.-.");
    else if(me[a] == '*') sendMorse("-..-");
    else if(me[a] == '@') sendMorse(".--.-.");
    else {
      letter();
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  send("SOS");

}
