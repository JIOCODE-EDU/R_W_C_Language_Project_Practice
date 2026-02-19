#include <stdio.h>

int main(){

  int a , b;

  int arr[10][10];

  printf("Enter number of rows : ");
  scanf("%d" , &a);

  printf("Enter number of colums: ");
  scanf("%d" , &b);

  for(int i = 0; i < a; i++){
    for(int j = 0; j < b; j++){
      scanf("%d" , &arr[i][j]);
    }
    printf("\n");
  }

  printf("Matrix :\n");

  for(int i = 0; i < a; i++){
    for(int j = 0; j < b; j++){
      printf("%d" , arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}