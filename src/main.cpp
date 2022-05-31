#include <Arduino.h>

class A
{
  public:
  A(){
    Serial.println("A constructor called");
  }
int var=5;
};

class B:public A{
  public:
  B(){
    Serial.println("B constructor called");
  }
  int var2=10;
};
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
B obj;
Serial.println(obj.var2);
}

void loop()
{
  // put your main code here, to run repeatedly:
}