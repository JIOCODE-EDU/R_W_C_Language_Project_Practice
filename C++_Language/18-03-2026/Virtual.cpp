// virtual function and abstract class

#include <iostream>

using namespace std;

class Shape{
  public:
  virtual void calculate() = 0; // pure virtual function
};

class Circle:public Shape{
  float radius;

  public:
  Circle(float r){
    radius = r;
  }

  void calculate(){
    float area = 3.14 * radius * radius;
    cout << "Area of circle: " << area << endl;
  }
};

class Triangle : public Shape{
  float base , height;

  public:

  Triangle(float b , float h){
    base = b;
    height = h;
  }

  void calculate(){
    float area = 0.5 * base * height;
    cout << "Area of Triangle: " << area << endl;
  }
};


class Rectangle : public Shape{
  float length , width;

  public:

  Rectangle(float l , float w){
    length = l;
    width = w;
  }

  void calculate(){
    float area = length * width;
    cout << "Area of Rectangle: " << area << endl;
  }
};

int main(){

  Circle c(10);
  Triangle t(4 , 6);
  Rectangle r(5 , 3);

  c.calculate();
  t.calculate();
  r.calculate();


  return 0;
}