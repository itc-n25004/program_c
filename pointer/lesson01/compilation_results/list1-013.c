#include <stdio.h>

int main(void) {
  int nx;
  int *pt = &nx;

  /*nxへのポインタを符号なしで整数値に変換して表示*/
  printf("&nx:%lu\n", (unsigned long)&nx);
  printf("pt:%lu\n", (unsigned long)pt);

  return (0);
}
