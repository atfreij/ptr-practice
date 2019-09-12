#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int *stkptr;
  int a;

  a = 25;
  stkptr = &a;
  
  printf("Welcome to ptr test!\n");
  printf("a: %d\n", a);
  printf("a address: %p\n", (void *)&a);
  printf("stkptr value: %p\n", stkptr);
  printf("stkptr address: %p\n", (void *)&stkptr);
  printf("*stkptr: %d\n", *stkptr);

  return 0;

}

