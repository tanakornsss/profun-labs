#include <stdio.h>

int main() {
  int sides;

  printf("Enter your sides : ");
  scanf("%d", &sides);

  float angle = ((sides - 2) * 180.0) / sides;
  printf("Inner angle of the polygon is : %.2f", angle);

  return 0;
}
