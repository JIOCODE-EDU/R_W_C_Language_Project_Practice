#include <stdio.h>

int main(){

  int a[6];
  int sum = 0;

  // for(int i = 0; i <= 5; i++){
  //   printf("Array Elememt : %d \n" , a[i]);
  // }

  // printf("Array Elememt : %d \n" , a[1]);
  // printf("Array Elememt : %d \n" , a[2]);
  // printf("Array Elememt : %d \n" , a[3]);
  // printf("Array Elememt : %d \n" , a[4]);
  // printf("Array Elememt : %d \n" , a[5]);

  printf("Enter Array Element: ");

  for(int i = 0; i <= 5; i++){
    scanf("%d" , &a[i]);
  }

  for(int i = 0; i <= 5; i++){
    printf("Array %d Element : %d \n" , i ,  a[i]);
    sum += a[i];
  }

  printf("Sum of Array : %d" , sum);

  return 0;

}