#include <stdio.h>

int main() {
    char name[256];
    char new_name[256];
    char str[1024];

    printf("Enter source file name: ");
    scanf("%255s", name);

    FILE* fr = fopen(name, "r");

    if (fr == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    printf("Enter new file name: ");
    scanf("%255s", new_name);

    FILE* fw = fopen(new_name, "w");

    if (fw == NULL) {
        printf("Cannot create destination file.");
        fclose(fw);
        return 1;
    }

    while (fgets(str, sizeof(str), fr) != NULL) {
        fputs(str, fw);
    }

    fclose(fr);
    fclose(fw);

    printf("Done!");

    return 0;
}