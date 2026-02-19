// single pointer *ptr
// double pointer **ptr
// triple pointer ***ptr

#include <stdio.h>

int main(){
  int num = 10;

int *ptr;
int **ptrs;


ptr = &num;

ptrs = &ptr;

printf("=== Chain of Pointers ===\n");

printf("Value of num: %d\n" , num);

printf("Value of *ptr : %d\n" , *ptr);

printf("Value of **ptrs : %d\n" , **ptrs);

printf("Address of num : %p\n" , &num);

printf("Value of ptr : %p\n" , ptr);

printf("Address of ptr : %p\n" , &ptr);

printf("Value of ptrs : %p\n" , ptrs);

**ptrs = 100;

printf("Value of Num : %d\n" , num);

return 0;
}