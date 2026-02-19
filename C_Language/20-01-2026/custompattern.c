// Pattern

//       *
//     *   *
//   *       *
// *   *   *   *

#include <stdio.h>

int main()
{

  int n = 4;

  for (int i = 1; i <= n; i++)
  {
    // space

    for (int k = 0; k < n - i; k++)
    {
      printf("_");
    }

    for (int j = 0; j < 1; j++)
    {
      printf("*");
    }

    if(!(i == 1)){
      for (int k = n; k > n - i; k--)
      {
        printf("_");
      }
    }

    if(!(i == 1)){
      for (int j = 0; j < 1; j++)
      {
        printf("*");
      }
    }

    printf("\n");
  }
}
