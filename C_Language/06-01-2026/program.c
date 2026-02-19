// Write a program to check number lies between to given numbers

#include <stdio.h>

int main(){

  int num , lnum , unum;

  printf("Enter the lower number: ");
  scanf("%d" , &lnum);

  printf("Enter the upper number: ");
  scanf("%d" , &unum);

  printf("Enter the number to check: ");
  scanf("%d" , &num);

  if(num >= lnum && num <= unum){
    printf("%d lies between %d and %d.\n" , num , lnum , unum);
  }else{
    printf("%d does not lies between %d and %d" , num , lnum , unum);
  }

  return 0;
}