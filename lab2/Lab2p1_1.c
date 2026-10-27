#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter Number a : ");
  if (scanf("%d",&a) != 1) return -1;
  printf("Enter Number b : ");  
  if (scanf("%d",&b) != 1) return -1;
  scanf("%d",&b);
  c = a + b;
  printf("%d + %d = %d",a,b,c);
  return 0;
}
