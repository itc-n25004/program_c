#include <stdio.h>

int main(void) {

  int i;
  long j;
  char s[20];

  printf("整数を入力してください：");
  scanf("%d", &i);

  printf("整数を入力してください：");
  scanf("%ld", &j);

  printf("整数を入力してください：");
  scanf("%s", s);

  printf("整数iの値は%dです\n", i);
  printf("整数kの値は%ldです\n", j);
  printf("整数sの値は%sです\n", s);
}
