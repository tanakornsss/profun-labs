#include <stdio.h>

int main() {
    FILE* f;

    f = fopen("text_10_1.txt", "r");
    
    if (f == NULL) return 1;

    char str[1024];

    int char_cnt = 0;
    int w_cnt = 0;
    int sen_cnt = 0;
    int in_word = 0;
    int last_char = '\0';

    while (fgets(str, sizeof(str), f) != NULL) {
        int i = 0;

        while (str[i] != '\0') {
            char c = str[i];

            // Count characters
            if (c != ' ' && c != '\n' &&
                c != '\t' && c != '\r') {
                char_cnt++;
            }

            // Count words
            if (c == ' ' || c == '\n' ||
                c == '\t' || c == '\r') {
                in_word = 0;
            }
            else if (in_word == 0) {
                w_cnt++;
                in_word = 1;
            }

            // Count lines
            if (c == '\n') {
                sen_cnt++;
            }

            last_char = c;
            i++;
        }
    }

    // Final line content
    if (last_char != '\0' && last_char != '\n') {
        sen_cnt++;
    }

    printf("Character count: %d\n", char_cnt);
    printf("Word count: %d\n", w_cnt);
    printf("Sentence count: %d\n", sen_cnt);
    
    fclose(f);

    return 0;
}