// 1 _ _ _ 1
//   1 _ 1
//     1
//   1 _ 1
// 1 _ _ _ 1

#include <stdio.h>

int main() {

    // outerloop
    int n = 5;

    for(int i = 1; i <= n; i++){

      // innerloop

      for(int j = 1; j <= n; j++){

        if(j == i || j == (n - i + 1)){

          printf("1 ");
          
        }else{

          printf(" ");

        }

      }

      printf("\n");
    }

    return 0;
}