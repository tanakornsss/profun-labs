#include <stdio.h>

int main() {

    struct student {
        int ID;
        char name[10];
    };

    struct student s1, s2, s3;

    scanf("%d", &s1.ID);
    scanf("%s", s1.name);

    scanf("%d", &s2.ID);
    scanf("%s", s2.name);

    printf(" %d,%s", s1.ID, s1.name) ;
    printf(" %d,%s", s2.ID, s2.name) ;
    return 0;
}
