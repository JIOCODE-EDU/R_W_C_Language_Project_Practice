// 1
// 1 2
// 1 2 3
// 1 2 3 4

// Left (Left)
// Right (Right)

#include <stdio.h>

int main(){

  int i , j;

  for(i = 1; i <= 5; i++){
    for(int k = 0; k <= 5 - i; k++){
      printf("  ");
    }

    for(j = 1; j <= i; j++){
      printf(" *");
    }

    printf("\n");
  }

  return 0;
}