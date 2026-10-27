#include <stdio.h>

int check_string(char* str, int mode) {
    // mode = 0
    // String length, space & null terminator excluded
    //
    // mode = 1
    // Vovel count

    int cnt = 0;
    if (mode) {
        char vovel[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

        int i = 0;
        while (str[i] != '\0') {
            for (int j = 0; j < 10; j++) {
                if (str[i] == vovel[j]) {
                    cnt++;
                    break;
                }
            }
            i++;
        }
    }
    else {
        int i = 0;
        while (str[i] != '\0') {
            if (str[i] != ' ') cnt++;
            i++;
        }
        cnt -= 1;
    }

    return cnt;
}

int main() {
    char str[64];
    int mode;

    printf("Enter string: ");
    fgets(str, 64, stdin);

    printf("Enter mode: ");
    scanf("%d", &mode);

    while (mode != 0 && mode != 1) {
        printf("Try again...\n");
        printf("Enter mode: ");
        scanf("%d", &mode);
    }

    printf("%d", check_string(str, mode));

    return 0;
}
