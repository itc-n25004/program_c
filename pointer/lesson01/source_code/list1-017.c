#include <stdio.h>

void put_stars(int no) {
  int i;
  for (i = 0; i < no; i++)
    putchar('*');
}
int main(int argc, char *argv[]) {
  int count;

  printf("何個表示しますか？:");
  scanf("%d", &count);

  put_stars(count);

  printf("\n%d個表示しました\n", count);

  return 0;
}
