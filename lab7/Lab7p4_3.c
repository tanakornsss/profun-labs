#include <stdio.h>

int main () {
    struct album_data {
        // String size too small
        char name[64];
        int years;
    };

    struct Artists {
        char name[10];
        struct album_data album[10];
        int num_album;
    };

    struct Artists artist[5];
    int i;

    for (int i = 0; i < 5; i++) {
        printf("Enter artist: ");
        scanf("%s", artist[i].name);

        printf("Enter album num: ");
        scanf("%d", &artist[i].num_album);

        for (int j = 0; j < artist[i].num_album; j++) {
            printf("Enter album name: ");
            scanf("%s", artist[i].album->name);

            printf("Enter album year: ");
            scanf("%d", &artist[i].album->years);
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("\n -- Artist: %s -- \n", artist[i].name);

        for (int j = 0; j < artist[i].num_album; j++) {
            printf("\t album(%d) :%s, %d\n",
                j + 1,
                artist[i].album[j].name,
                artist[i].album[j].years
            );
        }
    }

    return 0;
}
