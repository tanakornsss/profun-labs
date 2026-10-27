#include <stdio.h>
#include <string.h>

int main () {
    struct album_data {
        // String size too small
        char name[64];
        int years;
    };

    struct Artists {
        char name [10];
        struct album_data album[10];
        int num_album;
    };

    struct Artists artist;
    int i;

    strcpy(artist.name, "The Corrs");
    // Forgot '.'
    strcpy(artist.album[0].name,"Forgiven, Not Forgotten");
    artist.album[0].years = 1995;
    strcpy(artist.album[1].name, "Talk On Corners") ;
    artist.album[1].years = 1998;
    strcpy(artist.album[2].name, "The Corrs Unplugged");
    artist.album[2].years = 1999;
    // Forgot '.'
    strcpy(artist.album[3].name, "In Blue") ;
    artist.album[3].years = 2000;
    strcpy(artist.album[4].name, "Borrowed Heaven");
    artist.album[4].years = 2004;
    artist.num_album = 5;
    printf("\n -- Artist: %s -- \n", artist.name) ;
    for (i = 0; i < artist.num_album; i++) {
        printf("\t album(%d) :%s, %d\n",
            i + 1,
            artist.album[i].name,
            artist.album[i].years
        );
    }

    return 0;
}
