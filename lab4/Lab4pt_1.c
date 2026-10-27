#include <stdio.h>

int main() {
  int size;
  float sum = 0;

  printf("Enter number : ");
  scanf("%d", &size);

  for (int i = 1; i <= size; i++) {
    float num;

    printf("Number %d : ", i);
    scanf("%f", &num);

    sum += num;
  }

  printf("\nSummation is = %f", sum);

  return 0;
}
