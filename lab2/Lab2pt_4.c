#include <stdio.h>

int main() {
  char first_a[16], last_a[16], id_a[16];

  printf("Student1\n");

  printf(" %-9s: ", "Name");
  scanf("%s", first_a);

  printf(" %-9s: ", "Surname");
  scanf("%s", last_a);

  printf(" %-9s: ", "ID");
  scanf("%s", id_a);

  char first_b[16], last_b[16], id_b[16];

  printf("Student2\n");

  printf(" %-9s: ", "Name");
  scanf("%s", first_b);

  printf(" %-9s: ", "Surname");
  scanf("%s", last_b);

  printf(" %-9s: ", "ID");
  scanf("%s", id_b);

  char first_c[16], last_c[16], id_c[16];

  printf("Student3\n");

  printf(" %-9s: ", "Name");
  scanf("%s", first_c);

  printf(" %-9s: ", "Surname");
  scanf("%s", last_c);

  printf(" %-9s: ", "ID");
  scanf("%s", id_c);

  printf("+-------------------------------------------+----------+\n");
  printf("%-2s%-21s%-21s%-2s%-9s%-2s\n", "|", first_a, last_a, "|", id_a, "|");
  printf("%-2s%-21s%-21s%-2s%-9s%-2s\n", "|", first_b, last_b, "|", id_b, "|");
  printf("%-2s%-21s%-21s%-2s%-9s%-2s\n", "|", first_c, last_c, "|", id_c, "|");
  printf("+-------------------------------------------+----------+\n");

  return 0;
}
