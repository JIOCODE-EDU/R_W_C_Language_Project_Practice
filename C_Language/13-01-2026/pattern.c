#include <stdio.h>

int main(){
  
  for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= i; j++){
      for(int k = 1; k <= i; k++){
        printf("%d" , k);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}

// int main(){
//   for(int i = 1; i <= 5; i++){
//     for(int j = 1; j <= i; j++){
//       printf("%d" , j);
//     }
//     printf("\n");
//   }
// }

// int main(){
//   for(int i = 1; i <= 6; i++){
//     for(int j = 1; j <= i; j++){
//       printf("%d" , i);
//     }
//     printf("\n");
//   }
// }