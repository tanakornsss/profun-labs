#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;

  printf("Enter side of triangle : ");
  scanf("%d", &a);

  printf("Enter side of triangle : ");
  scanf("%d", &b);

  printf("Enter side of triangle : ");
  scanf("%d", &c);

  float res = sqrtf(powf(a, 2) + powf(b, 2));

  printf("\n");

  if (res == (float) c) {
    printf("This is a rightangled triangle.");
  }
  else {
    printf("This is not a rightangled triangle.");
  }

  return 0;
}
