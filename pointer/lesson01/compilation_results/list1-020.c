/*
2つの整数値を昇順にソート
*/

#include <stdio.h>

/*--- *x,*yの値を交換 ---*/
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

/*--- na<=*nbになるようにソート---*/
void sort2(int *na, int *nb) {

  if (*na > *nb)
    swap(na, nb);
}

int main(int argc, char *argv[]) {
  int a, b;
  puts("２つの整数値を入力してください");
  puts("整数A:");
  scanf("%d", &a);
  puts("整数A:");
  scanf("%d", &b);

  sort2(&a, &b);
  puts("昇順にソートしました。");
  printf("Aの値は%dです\n", a);
  printf("Bの値は%dです\n", b);
  return 0;
}
