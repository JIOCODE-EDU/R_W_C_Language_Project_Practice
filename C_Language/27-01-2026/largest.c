#include <stdio.h>

int main(){

  int arr[] = {10 , 45 , 98,  37 , 64};

  int n = sizeof(arr) / sizeof(arr[0]);

  int Max = arr[0];

  for(int i = 1; i < n; i++){
    if(arr[i] > Max){
      Max = arr[i];
    }
  }

  printf("Largest Element : %d" , Max);

  return 0;
}