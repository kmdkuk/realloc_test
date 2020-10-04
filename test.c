#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *n;
  n = (int *)calloc(1, sizeof(int));
  int count = 1;
  for (int i = 0; i < 10; i++) {
    count *= 2;
    printf("n を大きさ%dに拡張\n", count);
    n = (int *)realloc(n, 2 * sizeof(int));
  }
  int count_not_init = 0;
  for (int i = 0; i < count; i++) {
    printf("n[%4d]: %d\n", i, n[i]);
    if (n[i] != 0) {
      count_not_init++;
    }
  }
  printf("初期化されていなかった変数の個数は，%d\n", count_not_init);
  return 0;
}
