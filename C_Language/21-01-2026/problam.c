#include <stdio.h>

int main(){

  // int a = 10;
  // int b = 20;
  // int c = 30;
  // int d = 40;
  // int e = 50;
  // int f = 60;

  int a[] = {10 , 20 , 30 , 40 , 50 , 60};

  int b[] = {0 , 0 , 0 , 0 , 0 , 0};

  for(int i = 0; i <= 5; i++){
    printf("a is : %d\n" , a[i]);
  }

  // printf("a is : %d\n" , a[1]);
  // printf("a is : %d\n" , a[2]);
  // printf("a is : %d\n" , a[3]);
  // printf("a is : %d\n" , a[4]);
  // printf("a is : %d\n" , a[5]);

  return 0;
}