#include <stdio.h>

int main (void)
{
  int variable;
  int *pointer;

  printf("variable = %i\n", variable);
  printf("variable address = %p\n", &variable);
  printf("pointer = %p\n", pointer);
  printf("pointer address = %p\n\n", &pointer);

  variable = 5;
  printf("variable = %i\n", variable);
  printf("variable address = %p\n", &variable);
  printf("pointer = %p\n", pointer);
  printf("pointer address = %p\n\n", &pointer);

  // "&variable" returns the address of the memory location of "variable"
  // "&": gives you the address of a variable (it's called the "reference" operator)
  pointer = &variable;
  printf("variable = %i\n", variable);
  printf("variable address = %p\n", &variable);
  printf("pointer = %p\n", pointer);
  printf("pointer address = %p\n\n", &pointer);

  // "*pointer" access the memory location which address is saved in pointer
  // "*": gets you the value from an address (it's called the "dereference" operator)
  *pointer = 12;
  printf("variable = %i\n", variable);
  printf("variable address = %p\n", &variable);
  printf("pointer = %p\n", pointer);
  printf("pointer address = %p\n\n", &pointer);
}
