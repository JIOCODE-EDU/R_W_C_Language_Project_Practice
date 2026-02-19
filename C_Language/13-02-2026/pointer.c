#include <stdio.h>

int main(){

  int num = 10;

  int *ptr;

  ptr = &num;

  printf("Value of num : %d \n" , num);

  printf("Value of num using pointer : %d \n" , *ptr);

  return 0;
}