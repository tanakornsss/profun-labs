#include <stdio.h>
#include <stdlib.h>

int main() {
  // ROW = 2n - 1
  // COL = 2n - 1
  
  int n;

  printf("Enter number: ");
  scanf("%d", &n);

  for (int row = 1; row <= 2 * n - 1; row++) {

    int space = abs(row - n);

    for (int col = 1; col <= 2 * n - 1; col++) {
      if (col <= space || col > 2 * n - 1 - space) {
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
