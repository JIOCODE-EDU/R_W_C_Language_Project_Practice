// What is an Exception?

// An Exception is a runtime anomaly (enexpected situation) that disrupts normal program flow.

// Division by Zero

// Invalid array index

// File not found

// try and catch

// detected error

// handle them gracefully

// prevent program crash

/*
try{
  // code

}catch(type variable){
  // handling code
}



*/

// #include <iostream>

// using namespace std;

// int main(){
//   int a = 10, b = 0;

//   if(b == 0){
//     throw "Division by zero error";
//   }

//   cout << a / b;

// }

// #include <iostream>

// using namespace std;

// int main(){
//   try{
//     int a = 10 , b = 0;

//     if(b == 0){
//       throw "Cannot divide by zero..";
//     }

//     cout << a / b;

//   }catch(const char* msg){
//     cout << msg;
//   }

// }

// #include <iostream>

// using namespace std;

// int main(){
//   try{

//     int x;
//     cout << "Enter Number : ";
//     cin >> x;

//     if(x == 0){
//       throw 0;
//     }else if(x < 0){
//       throw -1;
//     }

//     cout << "valid number";

//   }catch(int e){

//     if(e == 0){
//       cout << "Zero not allowed";
//     }else{
//       cout << "Nagative number not allowed";
//     }
//   }
// }

// General Exception handler

#include <iostream>

using namespace std;

int main()
{
  try
  {

    int x;
    cout << "Enter Number : ";
    cin >> x;

    if (x == 0)
    {
      throw 0;
    }
    else if (x < 0)
    {
      throw "Nagative Value";
    }else if(x == 5){
      throw 5.5;
    }

    cout << "Valid Input";
  }
  catch (int e)
  {
    cout << "Integer exception: " << e << endl;
  }
  catch(const char* msg){
    cout << "String exception: " << msg << endl ;
  }
  catch(...){
    cout << "Unkown exception error";
  }
}