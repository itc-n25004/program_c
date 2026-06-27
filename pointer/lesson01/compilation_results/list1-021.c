#include <stdio.h>

int main(int argc, char *argv[]) {
  double nx;
  double *pt = &nx;

  printf("実数値を入力してください");
  scanf("%lf", pt);

  printf("あなたは%.2fと入力しましたね？\n", *pt);

  return 0;
}
