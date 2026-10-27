#include <stdio.h>

int main() {
    int nums[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", nums + i);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (nums[j] < nums[j + 1]) {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
