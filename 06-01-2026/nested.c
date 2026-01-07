#include <stdio.h>

int main(){
  int num;

  printf("Enter a number: ");
  scanf("%d" , &num);

  if(num > 0){
    if(num % 2 == 0){
      printf("The number is positive and even.");
    }else{
      printf("The number is positive and odd.");
    }
  }else{
    printf("The number is not positive.");
  }

  return 0;
}