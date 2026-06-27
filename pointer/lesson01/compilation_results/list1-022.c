/*
２つの浮動小数点数を交換(間違い)
*/

#include <stdio.h>

/*--- *x,*yの値を交換 ---*/
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(int argc, char *argv[]) {
  double a, b;
  puts("２つの整数値を入力してください");
  puts("整数A:");
  scanf("%lf", &a);
  puts("整数A:");
  scanf("%lf", &b);

  swap(&a, &b);

  puts("昇順にソートしました。");
  printf("Aの値は%fです\n", a);
  printf("Bの値は%fです\n", b);
  return 0;
}
