#include <stdio.h>

int main() {
  char str_a[24], str_b[24], str_c[24], str_d[24], str_e[24];

  printf("String 1 : ");
  scanf("%s", str_a);

  printf("String 2 : ");
  scanf("%s", str_b);

  printf("String 3 : ");
  scanf("%s", str_c);
  
  printf("String 4 : ");
  scanf("%s", str_d);

  printf("String 5 : ");
  scanf("%s", str_e);

  printf("\n**** Output ****\n");
  printf("%.3s\n", str_a);
  printf("%c%c%c%c\n", str_b[0], str_b[1], str_b[2], str_b[3]);
  printf("%c%c%c%c%c\n", str_c[0], str_c[1], str_c[2], str_c[3], str_c[4]);
  printf("%c%c%c%c\n", str_d[0], str_d[1], str_d[2], str_d[3]);
  printf("%c%c%c", str_e[0], str_d[1], str_d[2]);

  return 0;
}
