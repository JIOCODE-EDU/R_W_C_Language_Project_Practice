#include <stdio.h>

int main(){

  int marks;

  printf("Enter Marks: ");
  scanf("%d" , &marks);

  if(marks >= 90){
    printf("Grade : A \n");
  }else if(marks >= 70){
    printf("Grade : B \n");
  }else if(marks >= 60){
    printf("Grade: C \n");
  }else if(marks >= 40){
    printf("Grade : D\n");
  }else{
    printf("Grade: Fail");
  }

  return 0;
}