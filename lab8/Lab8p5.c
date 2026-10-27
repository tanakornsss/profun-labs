#include <stdio.h>

struct card {
    char *face; /* 2, 3, 4,... , J, Q, K, A */
    char *suit; /* Spade, Heart, Diamond, Club */
};

int main() {
    struct card aCard;
    struct card* cardPtr;
    aCard.face = "Ace";
    aCard.suit = "Spade";
    cardPtr = &aCard;
    printf("%s%s%s\n%s%s%s\n%s%s%s\n",
        aCard.face,
        " of ", aCard.suit,
        cardPtr->face,
        " of ", cardPtr->suit,
        (*cardPtr).face, " of ", (*cardPtr).suit);
    return 0;
}
