#include <stdio.h>
#include <string.h>
void sort(struct nice* , int, int);
struct nice {
    int id;
    char name[20];
};

int main() {
    int choice;
    struct nice n[2] = {{30459,"pangpond"},{2342346,"erferieirf"}};
    struct nice *ptr = &n;
    for (int i=0;i<2;i++){
        printf("%d %s",n[i].id,n[i].name);
    }
    scanf("%d",&choice);

    return 0;
}

