// 789
// 7 + 8 + 9 = 25

#include <stdio.h>

int sum(int n){

  // if(n == 0){
  //   return 0;
  // }

  // return (n % 10) + sum(n / 10);

  if(n < 10){
    return n;
  }

  return sum(n / 10);
}

int main(){

  int first , last , sums;

  int num = 1237;

  last = num % 10;

  first = sum(num);

  sums = first + last;

  printf("Sum = %d" , sums);

  return 0;
}

last = 7

sum(123)

sum(12)

sum(1)

sum(1)