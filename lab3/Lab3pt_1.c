#include <stdio.h>

int main() {
  float a, b, c, d, sum;

  printf("Enter number : ");
  scanf("%f", &a);

  printf("Enter number : ");
  scanf("%f", &b);

  printf("Enter number : ");
  scanf("%f", &c);

  printf("Enter number : ");
  scanf("%f", &d);

  sum = a + b + c + d;

  printf("\nSummation is = %.2f", sum);

  return 0;
}
