#include <stdio.h>

int main() {
  
  float num, sum = 0;
  int idx = 1;

  while (num != 0) {
    printf("Number %d : ", idx);
    scanf("%f", &num);

    sum += num;
    idx++;
  }

  printf("\nSummation is = %f", sum);

  return 0;
}
