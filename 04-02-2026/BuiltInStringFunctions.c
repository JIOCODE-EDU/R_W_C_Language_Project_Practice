// String Built-in Functions Implementation

#include <stdio.h>
#include <string.h>

// int main(){

//   int num[] = {10 , 20 , 30 , 40 , 50};

//   char str1[20] = "Hello"; // {"H" , "e" , "l" , "l" , "o" , "\0"}

//   char str2[20];

//   int i = 0;

//   while(str1[i] != '\0'){
//     str2[i] = str1[i]; // str2[1] = str1[1] // {"H" , "e"} = {"H" , "e"}
//     i++;
//   }

//   str2[i] = '\0';

//   printf("String : %s" , str2);

//   return 0;
// }

// strcpy()

// int main(){
//   char str1[20] = "Hello World!!";
    
//   char str2[20];

//   strcpy(str2 , str1);

//   printf("String : %d" , str2[5]);

//   return 0;
// }

// strlen (check string length)

int main(){

  char str[20] =" Hello World!! ";

  int length = strlen(str);

  printf("String Length = %d" , length);

  return 0;
  
}

