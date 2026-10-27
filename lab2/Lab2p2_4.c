#include <stdio.h>

int main() {
  float a, b, c, d;

  printf("Number 1 : ");
  scanf("%f", &a);

  printf("Number 2 : ");
  scanf("%f", &b);
  
  printf("Number 3 : ");
  scanf("%f", &c);
  
  printf("Number 4 : ");
  scanf("%f", &d);

  float sum = a + b + c + d;
  float avg = sum / 4;

  printf("Summation is : %.2f\n", sum);
  printf("Average is : %.3f", avg);

  return 0;
}
