// Write a program that prints a multiplication table for numbers up to 12.

#include <stdio.h>

int main() {
  for (int i = 1; i <= 12; i++) {
    for (int j = 2; j <= 12; j++) {
      printf("%d * %d = %-5d", j, i, j * i);
    }
    printf("\n");
  }

  return 0;
}
