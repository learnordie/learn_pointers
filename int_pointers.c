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

  // "&variable" returns the address of the memory block of "variable"
  pointer = &variable;
  printf("variable = %i\n", variable);
  printf("variable address = %p\n", &variable);
  printf("pointer = %p\n", pointer);
  printf("pointer address = %p\n\n", &pointer);

  // "*pointer" access the memory block which address is saved in pointer
  *pointer = 12;
  printf("variable = %i\n", variable);
  printf("variable address = %p\n", &variable);
  printf("pointer = %p\n", pointer);
  printf("pointer address = %p\n\n", &pointer);
}
