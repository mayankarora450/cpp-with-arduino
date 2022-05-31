#include <Arduino.h>
// this is example of compile time polymorphism
// class A{
//   public:
//   int sum(int num1,int num2){
//     return num1+num2;
//   }
//   int sum(int num1,int num2,int num3){
//     return num1+num2+num3;
//   }
// };
// void setup()
// {
//   // put your setup code here, to run once:
//   Serial.begin(9600);
//   A obj;
//   Serial.println(obj.sum(10,20,30));
//   Serial.println(obj.sum(10,20));

// }

// this is example of run time polymorphism

class A{
  public:
  void display(){
    Serial.println("parent class");
  }
};
class B:public A{
  public:
  void display(){
    Serial.println("child class");
  }
};
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
 A object1;
 object1.display();
 B object2;
 object2.display();

}

void loop()
{
  // put your main code here, to run repeatedly:
}