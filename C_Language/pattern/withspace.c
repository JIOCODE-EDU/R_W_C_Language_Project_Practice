// _ _ _ A
// _ _ A _ B
// _ A _ B _ C
// A _ B _ C _ D

#include <stdio.h>

int main(){

  char ch;

  for(int i = 1; i <= 4; i++){
    for(int k = 1; k <= 4 - i; k++ ){
      printf(" ");
    }

    ch = 'A';

    for(int j = 1; j <= i; j++){
      printf("%c " , ch);
      ch++;
    }

    printf("\n");

  }

   for(int i = 3; i >= 1; i--){
    for(int k = 1; k <= 4 - i; k++ ){
      printf(" ");
    }

    ch = 'A';

    for(int j = 1; j <= i; j++){
      printf("%c " , ch);
      ch++;
    }

    printf("\n");

  }


  return 0;
}