// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5 
// 1 2 3 4 5

#include <stdio.h>

int main(){

  int i , j;
  char ch = 'O';

  for(i = 5; i >= 1; i--){
    for(j = 1; j <= i; j++){
      // printf("%d " , i);
      // printf("* ");
      printf("%c " , ch);
      ch--;
    }

    printf("\n");
  }


  return 0;
}