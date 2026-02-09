// // TNRN

// #include <stdio.h>

// int printFunc(){
//   printf("Number");
// }

// int main(){

//   printFunc();

//   return 0;
// }


// TSRN

// #include <stdio.h>

// int printFunc(int a , int b){
//   printf("Function : %d" , a + b);
// }

// int main(){

//   printFunc(10 , 30);

//   return 0;
// }


// TNRS

// #include <stdio.h>

// int printFunc(){
//   int a = 10;
//   int b = 20;
//   return a + b;
// }

// int main(){

//   printf("Function : %d" , printFunc());

//   return 0;
// }

// TSRS

#include <stdio.h>

int printFunc(int a , int b){
  return a + b;
}

int main(){

  printf("Function : %d" , printFunc(100 , 200));

  return 0;
}