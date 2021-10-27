#include <SoftwareSerial.h>
SoftwareSerial BT(10,11);
#define sw 2

void setup() {
  // put your setup code here, to run once:
  pinMode(sw,OUTPUT);
  BT.begin(9600);
}
char a;
void loop() {
  // put your main code here, to run repeatedly:
  if(BT.available()){
    a = (BT.read());
    if(a == '1')
    {
      digitalWrite(sw,LOW);
      }
    if(a == '0')
    {
      digitalWrite(sw,HIGH);
      }
  }
}
