#include <stdio.h>

int main(int argc, char *argv[]) {
  int nx = 100;
  int ny = 200;
  int *px = &nx;
  int *py = &ny;

  printf("nxの値 %d\n", nx);
  printf("nyの値 %d\n", ny);
  printf("pxの値 %p\n", px);
  printf("pyの値 %p\n", py);
  return (0);
}
