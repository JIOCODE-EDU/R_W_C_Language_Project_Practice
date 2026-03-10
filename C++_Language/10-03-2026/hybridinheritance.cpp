#include <iostream>

using namespace std;

class Num1{
  protected:
  int n1;

  public:

  Num1(int a) : n1(a) {};

  int getN1(){
    return n1;
  }
};

class Num2 : public Num1{
  protected:
  int n2;

  public:
  Num2(int a , int b) : Num1(a) {
    n2 = b;
  }

  int getN2(){
    return n2;
  }
};

class Num3{
  protected:
  int n3;

  public:
  Num3(int c): n3(c) {};
  int getN3(){
    return n3;
  }
};

class Num4 : public Num3{
  protected:
  int n4;

  public:
  Num4(int c , int d) : Num3(c){
    n4 = d;
  };

  int getN4() {
    return n4;
  }
};

class SumAB : public Num2 , public Num4{
  public:
  SumAB(int a , int b , int c , int d) : Num2(a , b) , Num4(c , d) {};

  int sum(){
    return getN1() + getN2() + getN3() + getN4();
  }
};


int main(){

  SumAB calc(10 , 20 , 30 , 50);

  cout << "Sum Of Four Number " << calc.sum() << endl;

  return 0;
}
