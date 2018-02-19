#include <stdio.h>
int func(int x, int *f, int *g) {
  *f = x*9+13;
  *g = x*2+7;
  return 0;
}
int main(int argc, char const *argv[]) {
  int f, g;
  func(0, &f, &g);
  printf("f(%d) = %d\n", 0, f);
  printf("g(%d) = %d\n", 0, g);
  func(5, &f, &g);
  printf("f(%d) = %d\n", 5, f);
  printf("g(%d) = %d\n", 5, g);
  return 0;
}
