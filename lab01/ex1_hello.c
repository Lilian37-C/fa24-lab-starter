#include <stdio.h>

int main() {
  printf("Hello 61C\n");
  int* a;
  printf("a address:%p\n",&a);
  a += 2;
  printf("a address:%p\n",&a);
  return 0;
}
