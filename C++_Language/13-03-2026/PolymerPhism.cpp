// Method Overloading

// #include <iostream>
// using namespace std;

// class Math{
//   public:

//   int add(int a , int b){
//     return a + b;
//   }
  
//   int add(int a , int b , int c){
//     return a + b + c;
//   }

//   double add(double a , double b){
//     return a + b;
//   }
// };


// int main(){

//   Math m;

//   cout << "Addition of two numbers : " << m.add(10 , 20) <<  endl;
//   cout << "Addition of three numbers : " << m.add(10 , 20 , 30) << endl;
//   cout << "Addition of double numbers : " << m.add(5.2 , 5.7) << endl;

//   return 0;
// }

// Mathod of Overriding

// #include <iostream>
// using namespace std;


// class Animal{
//   public:
//   void sound(){
//     cout << "Animal makes sound" << endl;
//   }
// };

// class Dog : public Animal{
//   public:
//   void sound(){
//     cout << "Bow Bow" << endl;
//   }
// };


// int main(){

//   Dog d;
//   Animal a;

//   d.sound();
//   a.sound();

//   return 0;
// }

// Method of overloading use operator Unary 


// #include <iostream>
// using namespace std;

// class Number{
//   public:

//   int value;

//   Number(int v){
//     value = v;
//   }

//   Number operator - (Number obj){
//     Number temp(0);
//     temp.value = value - obj.value;
//     return temp;
//   }
// };


// int main(){

//   Number n1(10);
//   Number n2(20);
//   Number n3(30);

//   Number n4 = n1 - n2 - n3;

//   cout<< "Addition : " << n4.value << endl;

//   return 0;
// }


#include <iostream>

using namespace std;


class Counter{
  public:

  int count;

  Counter(){
    count = 0;
  }

  void operator ++(){
    count++;
  }
};


int main(){

  Counter c;

  ++c;
  ++c;

  cout << "Count : " << c.count << endl;

  return 0;
}


