#include <stdio.h>

int main() {
  int a, b, c;

  printf("Enter number 1 : ");
  scanf("%d", &a);

  printf("Enter number 2 : ");
  scanf("%d", &b),

  printf("Enter number 3 : ");
  scanf("%d", &c);

  int max = 0;
  int idx;

  if (max < a) {
    max = a;
    idx = 1;
  }

  if (max < b) {
    max = b;
    idx = 2;
  }

  if (max < c) {
    max = c;
    idx = 3;
  }

  printf("\nMaximum is Number %d (%d)", max, idx);

  return 0;
}
