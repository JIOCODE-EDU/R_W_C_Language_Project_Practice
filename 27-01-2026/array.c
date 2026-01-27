// Sum of Array element 

#include <stdio.h>

int sum(int arr[] , int n){
  int sum = 0;
   for(int i = 0; i < n; i++){
    sum = sum + arr[i];
  }

  return sum;
}

int main(){

  int arr[7] = {10 , 20 , 30 , 40 , 50 , 60 , 40};

  printf("Sum = %d" , sum(arr , 7));

}