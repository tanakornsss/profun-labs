#include <stdio.h>

int main() {
  int num, sum = 0;

  printf("Enter number : ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    sum += i;
  }
  
  printf("\nSummation (1 to %d) : %d", num, sum);

  return 0;
}
