#include <stdio.h>

void foo (int var);
void bar (int *ptr);

int main (void)
{
  int variable = 33;
  int *pointer = &variable;

  printf("\n--- Main function ---\n");
  printf("variable value (variable) = %i\n", variable);
  printf("variable address (&variable) = %p\n", &variable);

  printf("pointer value (pointer) = %p\n", pointer);
  printf("pointer address (&pointer) = %p\n", &pointer);
  printf("value of the variable that pointer points (*pointer) = %i\n", *pointer);

  foo(variable);
  bar(pointer);

  /* Comments about the output of foo and bar functions: */
  printf("\n***** See comments in the code about why 'var' and 'ptr' have the same memory address. *****\n");
  /* As we can see, the 'var' argument in 'foo' and the 'ptr' argument in 'bar' share the same memory address. That is because the compiler optimizes the stack memory, automatically allocating the same block of memory for those two variables. The process is as follow: firstly, when 'foo' is called, the compiler automatically allocates some memory for 'var'. Once 'foo' has ended, the memory is freed and it's then available for the future. Secondly, 'bar' is called, and because 'ptr' has the same size as 'var' (although one is an integer and the other is an int pointer, both have the same size), the compiler reuses the same part of the memory. */
}

void foo (int var)
{
  printf("\n--- Argument: variable ---\n");
  printf("var value (var) = %i\n", var);
  printf("var address (&var) = %p\n", &var);
}

void bar (int *ptr)
{
  printf("\n--- Argument: pointer ---\n");
  printf("ptr value (ptr) = %p\n", ptr);
  printf("ptr address (&ptr) = %p\n", &ptr);
  printf("value of the variable that ptr points (*ptr) = %i\n", *ptr);
}
