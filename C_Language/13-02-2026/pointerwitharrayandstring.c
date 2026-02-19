#include <stdio.h>

int main(){

  int arr[5] = {10 , 20 , 30 , 40 , 50};

  int *ptr = arr;

  printf("\n===== Pointer With Array =====\n");

  for(int i = 0; i < 5; i++){
    printf("arr[%d] = %d , *(ptr+%d) = %d\n" , i , arr[i] , i , *(ptr+i));
  }

  char str[] = "Hello C Language!";

  char *sptr = str;

  printf("\n======= Pointer with String ======\n");

  printf("Using string array: %s\n" , str);

  printf("Using Pointer array: %s\n" , sptr);

  printf("Character by Charecter:\n");

  while(*sptr != '\0'){
    printf("%c" , *sptr);
    sptr++;
  }

  return 0;
}