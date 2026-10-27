#include <stdio.h>

int main() {
  int a, b, c, sum;
  printf("Enter Number a : ");
  scanf("%d",&a);

  printf("Enter Number b : ");
  scanf("%d",&b);

  printf("Enter Number c : ");
  scanf("%d",&c);

  sum = a + b + c;

  float avg = sum / 3.0;

  printf("Average: %.2f", avg);

  return 0;
}
