#include <stdio.h>

int main() {
  char* str;
  int idx = 0, sum = 0;

  printf("Enter string : ");
  scanf("%s", str);

  while (str[idx] != '\0') {
    sum++;
    idx++;
  }

  printf("Length of string : %d", sum);

  return 0;
}
