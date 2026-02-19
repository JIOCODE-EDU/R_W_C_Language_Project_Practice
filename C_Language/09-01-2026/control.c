// switch case statement in c language

#include <stdio.h>

int main()
{

  int day = 2;

  switch (day)
  {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("wednesday");
    break;
  default:
    printf("invalid input");
  }

  return 0;
}