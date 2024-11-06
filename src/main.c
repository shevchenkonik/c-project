#include <stdio.h>
#include "lib.c"

int main() {
  int result = add(10, 5);
  printf("10 + 5 = %d\n", result);
  return 1;
}