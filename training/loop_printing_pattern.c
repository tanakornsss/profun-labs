#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int total_line = (2*n) - 1;

    // Line loop
    for (int i = 0; i < total_line; i++) {
        for (int j = 0; j < total_line; j++) {
            int line_index = abs(i + 1 - n);
            printf("%d", line_index);

            int descend_count, constant_count;

            descend_count = total_line - i;
        }
        printf("\n");
    }

    return 0;
}