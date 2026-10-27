#include <stdio.h>

int find_max(int x, int y) {
    if (x > y) return x;
    else return y;
}

int main() {

    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    int second_max, max;

    second_max = find_max(x, y);
    max = find_max(second_max, z);

    printf("Max: %d", max);

    return 0;
}
