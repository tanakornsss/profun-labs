#include <math.h>
#include <stdio.h>

void prime_check(int x) {

    if (x <= 1) return;

    for (int i = 2; i <= (int) sqrt((float) x); i++) {
        if (x % i == 0) return;
    }

    printf("%4d", x);

}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    for (int i = x; i <= y; i++) {
        prime_check(i);
    }

    return 0;
}
