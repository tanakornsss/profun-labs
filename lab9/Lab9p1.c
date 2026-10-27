#include <stdio.h>

int find_max(int x, int y) {
    if (x > y) return x;
    else return y;
}

int main() {

    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Max: %d", find_max(x, y));

    return 0;
}
