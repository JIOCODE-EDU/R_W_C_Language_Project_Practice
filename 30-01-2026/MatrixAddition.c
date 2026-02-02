#include <stdio.h>

int main(){

  int a[10][10] , b[10][10] , sum[10][10] , i , j;

  printf("Enter Matrix A: \n");

  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      scanf("%d" , &a[i][j]);
    }
  }

  printf("Enter Matrix B: \n");


   for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      scanf("%d" , &b[i][j]);
    }
  }

  printf("Sum of Matrix: \n");

  for(i = 0; i<2; i++){
    for(j = 0; j < 2; j++){
      sum[i][j] = a[i][j] * b[i][j];
    }
  }

  printf("Print Matrix:\n");

  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf("%d " , sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}