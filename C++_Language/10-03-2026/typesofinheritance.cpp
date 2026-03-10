#include <iostream>

using namespace std;

class RBI {
  protected:
  double rate;

  public:

  RBI(double r) : rate(r) {};

  double getROI(){
    return rate;
  }
};

class SBI : public RBI{
  public:
  SBI(double r) : RBI(r) {};
};

class BOB : public RBI{
  public:
  BOB(double r) : RBI(r) {};
};

class ICICI : public RBI{
  public:
  ICICI(double r): RBI(r) {};
};

int main(){

  SBI sbi(7.6);
  BOB bob(6.9);
  ICICI icici(8.1);

  cout << "SBI ROI " << sbi.getROI() << "%" << endl; 
  cout << "BOB ROI " << bob.getROI() << "%" << endl; 
  cout << "ICICI ROI " << icici.getROI() << "%" << endl; 

  return 0;
}

