/* Control Structure in C Language */

#include <stdio.h>
#include <string.h>

int main(){

  // if statement

  char goal[20];

  printf("Write your goal?");

  scanf("%s" , goal);

  if(strcmp(goal , "cricket") == 0){
    printf("Nice Choice!!!");
  }else{
    printf("Good Choice!!");
  }


  return 0;
}