#include <stdio.h>

int main() {
  int a, b;

  printf("Enter Number 1 : ");
  scanf("%d", &a);

  printf("Enter Number 2 : ");
  scanf("%d", &b);

  int div, frac;

  div = a / b;
  frac = a % b;

  printf("%-9s: %d\n", "Divided", div);
  printf("Fraction : %d", frac);

  return 0;
}
