#include <stdio.h>

int main() {
  int a, b, res;

  printf("Enter number : ");
  scanf("%d", &a);
  
  printf("Enter number : ");
  scanf("%d", &b);
  
  res = (a == b) ? a + b : a - b;

  printf("\n%d %c %d = %d", a, (a == b) ? '+' : '-', b, res);

  return 0;
}
