#include <stdio.h>

int main() {
    int mat_a[3][3], mat_b[3][3];

    printf("Enter the matrix A: \n");
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &mat_a[i][0], &mat_a[i][1], &mat_a[i][2]);
    }
    printf("\n");

    printf("Enter the matrix B: \n");
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &mat_b[i][0], &mat_b[i][1], &mat_b[i][2]);
    }

    int mat_calc[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    // 1111 + 1221 + 1331, | 1112 + 1222 + 1332, | 1113 + 1223 + 1333
    // 2111 + 2221 + 2331, | 2112 + 2222 + 2332, | 2113 + 2223 + 2333
    // 3111 + 3221 + 3331, | 3112 + 3222 + 3332, | 3113 + 3223 + 3333

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            for (int n = 0; n < 3; n++) {
                mat_calc[row][col] += mat_a[row][n] * mat_b[n][col];
            }
        }
    }
    printf("\n");

    printf("The matrix C = A * B is: \n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%3d ", mat_calc[row][col]);
        }
        printf("\n");
    }

    return 0;
}
