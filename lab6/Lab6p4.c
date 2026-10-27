#include <stdio.h>

int main() {
    char text[1024];
    char words[128][128];
    int length[128];

    int word_count = 0;
    int j = 0;

    fgets(text, sizeof(text), stdin);

    // End of string
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && text[i] != '\n') {
            words[word_count][j] = text[i];
            j++;
        }
        else {
            if (j > 0) {
                words[word_count][j] = '\0';
                length[word_count] = j;

                word_count++;
                j = 0;
            }
        }
    }

    // Last word
    if (j > 0) {
        words[word_count][j] = '\0';
        length[word_count] = j;
        word_count++;
    }

    printf("\n%d words\n", word_count);

    for (int i = 0; i < word_count; i++) {
        printf("%-10s : %d\n", words[i], length[i]);
    }

    return 0;
}
