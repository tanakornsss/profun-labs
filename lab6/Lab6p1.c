#include <stdio.h>

int main() {

    // Identity Matrix
    //
    // 1 0 0
    // 0 1 0
    // 0 0 1

    int matrices[3][3];

    printf("Enter the matrix: \n");
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &matrices[i][0], &matrices[i][1], &matrices[i][2]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i == j && matrices[i][j] != 1) ||
                (i != j && matrices[i][j] != 0)) {
                printf("The matrix is not an identity matrix.");
                return 0;
            }
        }
    }

    printf("The matrix is an identity matrix.");

    return 0;
}
