#include <stdio.h>
int main() {
  int num, i, j;
  printf ("Enter number : ");
  scanf ("%d", &num);
  
  for (i = 1; i <= num; i++) {
    printf ("\n");
    for (j = 1; j <= num; j++) {
      printf ("*");
    }
  }

  return 0;
}
