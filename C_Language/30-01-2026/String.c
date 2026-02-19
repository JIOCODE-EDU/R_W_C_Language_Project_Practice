#include <stdio.h>

int main()
{

  // char str[] = "Hello" ;
  char str[50];

  int i = 0;

  printf("Enter String: ");
  scanf("%s" , str);
  
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("%c", str[i]);
  // }

  while(str[i] != '\0'){
    i++;
  }

  printf("Length = %d" , i);

  return 0;
}