#include <stdio.h>

int main() {
    char c = 'm';
    int i, r = 0;
    struct shop {
        char name[10];
        float height;
    };


    struct shop temp, sp[10]= {
        {"Alpha",131.3} ,
        {"Delta", 134 } ,
        {"Romeo", 122} ,
        {"Fox", 162 } ,
        {"Golf", 140 } ,
        {"Jack", 124 } ,
        {"Tommy", 140} ,
        {"Rub", 170.4 } ,
        {"Giffy", 129.2} ,
        {"Ray", 123.6}
    };

    for (int i = 0; i < 10; i++) {
        if (sp[i].height > 140) {
            printf("\n [%d] : %s, %f",i ,sp[i].name, sp[i].height);
        }
    }

    return 0;
}
