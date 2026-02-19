#include <stdio.h>

int main(){

  int a = 5;
  int b = 3;

  printf("Add or assign: %d\n" , a+=b); // a = a + b

  printf("a value: %d\n" , a);

  printf("Substract or assign : %d\n" , a-=b); // a = a - b

  printf("Multi or assign : %d\n" , a*=b); // a = a * b

  printf("devision or assign : %d\n" , a/=b); // a = a / b

  printf("modulus or assign : %d\n" , a%=b); // a = a % b


  return 0;
}