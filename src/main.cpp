#include <Arduino.h>
/* When does the destructor get called?
A destructor is automatically called when:
1) The program finished execution.
2) When a scope (the { } parenthesis) containing local variable ends.
*/
class destructor
{
public:
  destructor()
  {
    Serial.println("hello from constructor");
  }
  ~destructor()
  {
    Serial.println("hello from destructor");
  }
  void display()
  {
    Serial.println("hello");
  }
  void display2()
  {
    Serial.println("hello2");
  }
};
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  destructor obj;
  obj.display();
  obj.display2();
}

void loop()
{
  // put your main code here, to run repeatedly:
}