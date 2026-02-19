// Fibonacci Series

// 0 to 10

// 0 1 1 2 3 5 7 13

#include <stdio.h>

int fibonacci(int n){
  if(n == 0){
    return 0;
  }else if(n == 1){
    return 1;
  }else{
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main(){
  int i;

  for (i = 0; i < 10; i++){
    printf("%d " , fibonacci(i));
  }

  return 0;
}



