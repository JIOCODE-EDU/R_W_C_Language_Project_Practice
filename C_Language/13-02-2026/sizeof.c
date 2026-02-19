#include <stdio.h>

int main(){
  int a = 10;
  char b = 'a';
  float c = 10.20;
  double d = 1234.5;

  int *p1;
  char *p2;
  double *p3;

  // sizeof() operator

  printf("Size of int : %d byte \n" , sizeof(a));

  printf("Size of char : %d byte \n" , sizeof(b));

  printf("Size of float : %d byte \n" , sizeof(c));

  printf("Size of Double : %d byte \n" , sizeof(d));

  printf("Size of Pointer of int : %d \n" , sizeof(p1));

  printf("Size of Pointer of char : %d \n" , sizeof(p2));

  printf("Size of Pointer of double : %d \n" , sizeof(p3));


  return 0;
}