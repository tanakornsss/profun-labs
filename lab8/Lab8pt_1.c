#include <stdio.h>
#include <conio.h>

#define MAX_NUM 10

int main() {
    float num[MAX_NUM];

    printf("Enter your number: ");
    for (int i = 0; i < MAX_NUM; i++) {
        scanf("%f", num + i);
    }

    char input;
    while (1) {
        float search;
        printf("Enter number to search: ");
        scanf("%f", &search);

        int found = 0;
        for (int i = 0; i < MAX_NUM; i++) {
            float current = *(num + i);
            if (search == current) {
                found = 1;
                printf("Value: %f ", current);
                printf("Pos: %d", i + 1);
                break;
            }
        }

        if (found == 0) printf("Cannot find the matched data");

        printf("\nDo you wish to continue\n?");

        // Waiting for correct input
        while (1) {
            input = getch();

            if (input == 'Y') break;
            if (input == 'N') return 0;

            printf("\nInvalid command. Please enter Y or N: ");
        }
    }

    return 0;
}
