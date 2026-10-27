#include <stdio.h>

int main() {
  float gpa1;
  int on_probation = 0;

  printf("Enter GPA (1-1) : ");
  scanf("%f", &gpa1);

  printf("\tYour status : ");
  if (gpa1 >= 2.0) {
    printf("Normal");
  }
  else if (gpa1 < 2.0 && gpa1 >= 1.0) {
    printf("Probation");
    on_probation = 1;
  }
  else {
    printf("Retired");
    return 1;
  }
  
  float gps2, gpa2;

  printf("\n");
  printf("Enter GPS (1-2) : ");
  scanf("%f", &gps2);

  printf("Enter GPA (1-2) : ");
  scanf("%f", &gpa2);
  
  printf("\tYour status : ");
  if (gpa2 >= 2.0) on_probation = 0;
  
  if (on_probation && gps2 < 2.0) {
    printf("Retired");
    return 1;
  }
  else if (gpa2 >= 2.0) {
    printf("Normal");
  }
  else if (gpa2 < 2.0 && gpa2 >= 1.0) {
    printf("Probation");
    on_probation = 1;
  }
  else {
    printf("Retired");
  }

  return 0;
}
