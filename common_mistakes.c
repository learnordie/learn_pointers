# include <stdio.h>

int main(void)
{
  int var = 23;
  int *ptr;

  printf("var = %i\n", var);
  printf("ptr = %p\n", ptr);
  /* printf("*ptr = %i\n", *ptr); // WRONG! "ptr" points to an unkown location (garbage; we don't know if it points to an int, float, char, ...) */
  
  /* ptr = var; // WRONG! Asigning an int variable to an memory address */
    
  /* *ptr = &var; // WRONG! "*ptr" is the value of the int variable pointed by ptr, while "&var" is the memory location (the address) of the variable "var" */

  ptr = &var; // CORRECT! 
  printf("var = %i\n", *ptr);
  printf("ptr = %p\n", ptr);

  int var2 = 7;
  *ptr = var2;
  printf("var = %i\n", var);
  printf("var2 = %i\n", var2);
  printf("*ptr = %i\n", *ptr);
  printf("ptr = %p\n", ptr);
}
