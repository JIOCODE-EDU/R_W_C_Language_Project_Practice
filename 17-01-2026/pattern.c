//       1
//     * 2 *
//   * * 3 * *
// * * * 4 * * *
//   * * 5 * *
//     * 6 *
//       7


//_ _ _ 1
//_ _ * 2 *
//_ * * 3 * *
//* * * 4 * * *


#include <stdio.h>
#include <stdlib.h>

int main()
{

  int n = 7;
  int mid = n / 2 + 1;

  for (int i = 1; i <= n; i++)
  {

    int stars = (i <= mid) ? i - 1 : n - 1;

    // space

    for (int k = 1; k <= abs(mid - i); k++)
    {
      printf(" ");
    }

    for (int j = 1; j <= stars; j++)
    {
      printf("*");
    }

    printf("%d", i);

    for (int m = 1; m <= stars; m++)
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}

// stars = 5 <= 4 = n - i // 

// 1 _ _ _ 1
//   1 _ 1
//     1
//   1 _ 1
// 1 _ _ _ 1


