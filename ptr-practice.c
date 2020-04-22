#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int *stkptr;
  int a;
  int b;

  a = 25;
  stkptr = &a;
  
  printf("Welcome to ptr test!\n");
  printf("a value: %d\n", a);
  printf("&a (address-of a): %p\n", (void*)&a);
  printf("stkptr value: %p\n", stkptr);
  printf("&stkptr (address-of stkptr): %p\n", (void*)&stkptr);
  printf("*stkptr (dereference stkptr): %d\n", *stkptr);

  *stkptr = 50;
  printf("*stkptr (re-written): %d\n", *stkptr);
  printf("stkptr (re-written): %p\n", stkptr);

  // Equivalence tests
  b = 100;
  *stkptr = b;
  printf("stkptr value: %p\n", stkptr);
  printf("&stkptr (address-of stkptr): %p\n", (void*)&stkptr); 
  printf("*stkptr (dereference stkptr): %d\n", *stkptr);
  printf("b value: %d\n", b);
  printf("&b (address-of b): %p\n", &b);
  printf("a value: %d\n", a);

  return 0;

}

