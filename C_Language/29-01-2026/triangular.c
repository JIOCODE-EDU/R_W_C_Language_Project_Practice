// Upper Triangular Matrix

// 1 2 3
// 0 4 5
// 0 0 6

// Lower Triangular Matrix


// 1 0 0
// 2 3 0
// 4 5 6

#include <stdio.h>

int main(){

  int a[3][3] , i , j ;
  int flag = 1;

  printf("Enter Matrix: \n");

  for(i = 0; i < 3 ; i++){
    for(j = 0; j < 3; j++){
      scanf("%d" , &a[i][j]);
    }
  }

   for(i = 0; i < 3 ; i++){
    for(j = 0; j < 3; j++){
      printf("%d" , a[i][j]);
    }
  }

  for(i = 1; i < 3; i++){
    for(j = 0; j < i ; j++){
      if(a[i][j] != 0){
        flag = 0;
        break;
      }
    }
  }

  if(flag){
    printf("Matrix Uppercase");
  }else{
    printf("Matrix Lowercase");
  }

  return 0;
}

