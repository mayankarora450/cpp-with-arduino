#include <Arduino.h>
class car
{
  char color[10];

public:
  int speed;

public:
  void getdata(int distance, int fuel)
  {
    Serial.println("the car has covered " + String(distance) + " km and has consumed " + String(fuel) + " L");
  }
  void milage(float distance, float fuel);
  void carspeed()
  {
    Serial.println("car speed is " + String(speed));
  }
};

void car::milage(float d,float f){
  float carmilage=d/f;
  Serial.println("car milage is "+String(carmilage));
}
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  car swift;
  swift.getdata(120,7);
  swift.milage(120,7);
  swift.speed=50;
  swift.carspeed();
}

void loop()
{
  // put your main code here, to run repeatedly:
}