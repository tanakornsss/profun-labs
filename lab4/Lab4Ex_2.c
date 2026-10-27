#include <stdio.h>

int main() {
  int num;

  printf("Enter number : ");
  scanf("%d", &num);

  printf("Show number : ");

  for (int i = 1; i <= num; i++) {
    printf("%d    ", i);
  }

  return 0;
}
