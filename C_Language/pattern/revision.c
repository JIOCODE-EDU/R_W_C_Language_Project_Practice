// #include <stdio.h>

// int main(){
//   int n = 5;

//   for(int i = 0; i < n; i++){

//     for(int k = 0; k < i; k++){
//       printf(" ");
//     }

//     for(int j = 5; j > i; j--){
//       if(j % 2 == 0){
//         printf("0");
//       }
//       else{
//         printf("1");
//       }
//     }

//     printf("\n");
//   }

//   return 0;
// }




#include <stdio.h>

int main(){

  int n = 5;

  for(int i = n; i >= 1; i--){

    for(int k = n; k >= n - i; k--){
      printf("  ");
    }

    for(int j = i; j <= n ; j++){
      printf("%d " , j);
    }

    for(int j = n - 1; j >= i; j--){
      printf("%d " , j);
    }

    printf("\n");

  }


  return 0;
}