#include <stdio.h>

int main() {
  char* str;
  int idx = 0;

  printf("Enter string : ");
  scanf("%s", str);

  while (str[idx] != '\0') {
    printf("%c\n", str[idx]);
    idx++;
  }

  printf("\nPress ENTER to end Program.");

  return 0;
}
