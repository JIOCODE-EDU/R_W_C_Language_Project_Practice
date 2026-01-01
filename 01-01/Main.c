// C Language Operators Example

// Arithmetic Operators

#include <stdio.h>

int main(){

  int a = 20 , b = 10;

  printf("Sum of : %d\n" , a + b);
  printf("Subtra of : %d\n" , a - b);
  printf("Multi of : %d\n" , a * b);
  printf("Division of : %d\n" , b / a);
  printf("Modulus of : %d\n" , a / b);

  // Relational Operators

  // syntax of c statements

  // if(true){
  //   // if block (true)
  // }else{
  //   // else block
  // }

  if(a > b){
    printf("a is lessthan b");
  }else if(a >= b){
    printf("a same as b");
  }else{
     printf("b is greater a");
  }

  return 0;
}