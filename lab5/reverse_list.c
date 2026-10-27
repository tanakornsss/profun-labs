#include <stdio.h>
#include <string.h>

void reverse_list(char* str) {
  // Remove null terminator from size
  int size = strlen(str) - 1;

  for (int i = 0; i <= size; i++) {
    printf("%c", str[size - i]);
  }
}

int main() {
  char* str;

  printf("Enter string: ");
  fgets(str, 128, stdin);

  reverse_list(str);

  return 0;
}
