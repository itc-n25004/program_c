#include <stdio.h>

void swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

int main(void) {
  int a, b;
  puts("２つの整数を入力してください");
  printf("整数:A");
  scanf("%d", &a);
  printf("整数:B");
  scanf("%d", &b);

  swap(a, b);

  puts("整数A,Bの値を交換しました");
  printf("整数Aの値は%d \n", a);
  printf("整数Bの値は%d \n", b);

  return (0);
}
