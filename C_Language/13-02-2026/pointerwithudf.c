#include <stdio.h>

void increment(int *ptr){
  *ptr = *ptr + 1;
}

int main(){

  int num = 10;

  increment(&num);
  increment(&num);

  printf("value of num : %d \n" , num);

  return 0;
}