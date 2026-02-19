// break  ,continue and goto statement

// break:  the break statement is used to immidiately terminate a loop or a switch statement and transfer control to the statement following it.

// continue : The continue statement is used to skip the remaining statements of the current loop iteration and move to the next iteration.

// goto statement : The goto statement transfer control inconditionally to a labeled statement within the same function. its use is generally discouraged beacuse it makes program hard to read and maintain.

// #include <stdio.h>

// int main()
// {
//   int i, j;

//   for (i = 0; i <= 10; i++)
//   {
//     printf("for loop i : %d\n", i);
//     for (j = 0; j < 5; j++)
//     {
//       if (i == 5)
//       {
//         break;
//       }
//       printf("for loop j : %d\n", j);
//     }
//   }

//   return 0;
// }



// #include <stdio.h>

// int main(){
//   int i, j;

// for (i = 0; i <= 10; i++)
//   {
//     printf("for loop i : %d\n", i);
//     for (j = 0; j < 5; j++)
//     {
//       if (i == 5)
//       {
//         break;
//       }
//       printf("for loop j : %d\n", j);
//     }
//   }

//   return 0;
// }



#include <stdio.h>

int main(){
  int i = 1;

  label:
  printf("goto : %d\n" , i);
  i++;
   
  if(i <= 10)
    goto label;

  return 0;
}