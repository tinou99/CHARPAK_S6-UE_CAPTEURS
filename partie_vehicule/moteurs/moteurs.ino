int pinI1 = 8;
int pinI2 = 11;
int speedpinA = 9;
int pinI3 = 12;
int pinI4 = 13;
int speedpinB = 10;
int spead = 127;

void setup(){
  pinMode(pinI1,OUTPUT);
  pinMode(pinI2,OUTPUT);
  pinMode(speedpinA,OUTPUT);
  pinMode(pinI3,OUTPUT);
  pinMode(pinI4,OUTPUT);
  pinMode(speedpinB,OUTPUT);
}
  
void forward(){
  //Drive motor forward
  analogWrite(speedpinA,spead);
  analogWrite(speedpinB,spead);
  digitalWrite(pinI4,HIGH);
  digitalWrite(pinI3,LOW);
  digitalWrite(pinI2,LOW);
  digitalWrite(pinI1,HIGH);
}

void backward(){
//Drive motor backwards
  analogWrite(speedpinA,spead);
  analogWrite(speedpinB,spead);
  digitalWrite(pinI4,LOW);
  digitalWrite(pinI3,HIGH);
  digitalWrite(pinI2,HIGH);
  digitalWrite(pinI1,LOW);
}
