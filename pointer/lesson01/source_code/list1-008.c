#include <stdio.h>

int main(int argc, char *argv[]) {

  int nx;
  int *pt;

  printf("int型は %u byteです \n ", (unsigned)sizeof(int));
  printf("int型は %u byteです \n ", (unsigned)sizeof(int *));

  printf("nxは%d byteです。\n", (unsigned)sizeof(nx));
  printf("*ptは%d byteです。\n", (unsigned)sizeof(*pt));
  printf("ptは%d byteです。\n", (unsigned)sizeof(pt));
  printf("&nxは%d byteです。\n", (unsigned)sizeof(&nx));
  return 0;
}
