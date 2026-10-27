#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;

  printf("Enter number: ");
  scanf("%d", &n);

  // ROW , COL 2n - 1

  for (int row = 1; row <= 2 * n - 1; row++) {
    int space = abs(n - row);

    for (int col = 1; col <= 2 * n - 1; col++) {
      if (col <= space | col > 2 * n - 1 - space) {
        printf(" ");
      }
      else {
        printf("*");
      }
    }
    printf("\n");
  }

  return 0;
}
