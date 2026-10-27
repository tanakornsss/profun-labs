#include <stdio.h>

int main() {
  int width, length, area;

  printf("Width : ");
  scanf("%d", &width);

  printf("Height : ");
  scanf("%d", &length);

  area = width * length;
  printf("Area : %d", area);

  return 0;
}
