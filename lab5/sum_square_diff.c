#include <stdio.h>

int main() {
  int max, sum_square = 0, square_sum = 0;
  printf("Enter number: ");
  scanf("%d", &max);

  for (int i = 1; i <= max; i++) {
    sum_square += i * i;
    square_sum += i;
  }

  square_sum *= square_sum;

  int diff = square_sum - sum_square;

  printf("%d", diff);

  return 0;
}
