#include <stdio.h>

int fectorial(int n){
  if(n == 0){
    return 1;
  }else{
    return n * fectorial(n - 1);
  }
}

int main(){
  int num = 6;

  printf("Fectorial = %d" , fectorial(num));

  return 0;
}

// 1 * 2 = 2
// 2 * 3 = 6
// 6 * 4 = 24
// 24 * 5 = 120
// 120 * 6 = 720

