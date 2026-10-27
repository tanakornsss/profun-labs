#include <stdio.h>
#include <conio.h>

int main() {
 
  char grade_a, grade_b, grade_c, grade_d, grade_e;
  float credit_a, credit_b, credit_c, credit_d, credit_e;
  float sum_a, sum_b, sum_c, sum_d, sum_e;

  printf("Enter grade : ");
  scanf(" %c", &grade_a);
  printf("Enter grade : ");
  scanf(" %c", &grade_b);
  printf("Enter grade : ");
  scanf(" %c", &grade_c);
  printf("Enter grade : ");
  scanf(" %c", &grade_d);
  printf("Enter grade : ");
  scanf(" %c", &grade_e);

  printf("\n");

  printf("Enter credit : ");
  scanf(" %f", &credit_a);
  printf("Enter credit : ");
  scanf(" %f", &credit_b);
  printf("Enter credit : ");
  scanf(" %f", &credit_c);
  printf("Enter credit : ");
  scanf(" %f", &credit_d);
  printf("Enter credit : ");
  scanf(" %f", &credit_e);

  if (grade_a == 'A') {
    sum_a = 4.0 * credit_a;
  }
  else if (grade_a == 'B') {
    sum_a = 3.0 * credit_a;
  }
  else if (grade_a == 'C') {
    sum_a = 2.0 * credit_a;
  }
  else if (grade_a == 'D') {
    sum_a = 1.0 * credit_a;
  }


  if (grade_b == 'A') {
    sum_b = 4.0 * credit_b;
  }
  else if (grade_b == 'B') {
    sum_b = 3.0 * credit_b;
  }
  else if (grade_b == 'C') {
    sum_b = 2.0 * credit_b;
  }
  else if (grade_b == 'D') {
    sum_b = 1.0 * credit_b;
  }


  if (grade_c == 'A') {
    sum_c = 4.0 * credit_c;
  }
  else if (grade_c == 'B') {
    sum_c = 3.0 * credit_c;
  }
  else if (grade_c == 'C') {
    sum_c = 2.0 * credit_c;
  }
  else if (grade_c == 'D') {
    sum_c = 1.0 * credit_c;
  }

  
  if (grade_d == 'A') {
    sum_d = 4.0 * credit_d;
  }
  else if (grade_d == 'B') {
    sum_d = 3.0 * credit_d;
  }
  else if (grade_d == 'C') {
    sum_d = 2.0 * credit_d;
  }
  else if (grade_d == 'D') {
    sum_d = 1.0 * credit_d;
  }


  if (grade_e == 'A') {
    sum_e = 4.0 * credit_e;
  }
  else if (grade_e == 'B') {
    sum_e = 3.0 * credit_e;
  }
  else if (grade_e == 'C') {
    sum_e = 2.0 * credit_e;
  }
  else if (grade_e == 'D') {
    sum_e = 1.0 * credit_e;
  }

  float sum = sum_a + sum_b + sum_c + sum_d + sum_e;
  float cred_sum = credit_a + credit_b + credit_c + credit_d + credit_e;
  float avg = sum / cred_sum;

  printf("\n%.2f", avg);
  if (avg < 2.0) printf("\nPro");

  getch();
  return 0; //line 17
}
