#include <stdio.h>

int main(void) {
  register int nx;

  pritnf("&nxの値は%pです\n", &nx); /*error*/
  return (0);
}
