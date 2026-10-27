#include <stdio.h>

int main() {
  int a, b;

  printf("Enter number 1 : ");
  scanf("%d", &a);

  printf("Enter number b : ");
  scanf("%d", &b);

  while (b == 0) {
    printf("Error divided by zero, Enter number 2 again : ");
    scanf("%d", &b);
  }

  int product, rem;

  product = a / b;
  rem = a % b;

  printf("\nDivided : %d\nFraction : %d", product, rem);

  return 0;
}
