#include <stdio.h>
#include <string.h>

// Sales object
// id
// name
// price
// avail unit

struct product {
    int id;
    char name[32];
    float price;
    int unit;
};

int menu() {
    int choice;

    printf("Sales portal\n");
    printf("[1] Display stocks\n");
    printf("[2] Perform sale\n");
    printf("[3] Update stocks\n");
    printf("[0] Quit\n\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    return choice;
}

int read_file(char* fname, struct product* prod) {
    FILE* f;
    fopen(fname, "r");

    if (f == NULL) return -1;

    fclose(f);
    return 0;
}

void display(struct product* prod, int cnt) {
    printf("-------------------------------------------\n");
    printf("%-10s %-15s %-10s %-10s\n", "ID", "NAME", "PRICE", "STOCK");
    printf("-------------------------------------------\n");

    printf("Items: %d\n", cnt);
}

void sale() {
    printf("Sale");
}

void update() {
    printf("Update");
}

int main() {
    // Sales program
    // Read text files
    // Update text files

    struct product prod[2];

    prod[0].id = 1;
    strcpy(prod[0].name, "Test");
    prod[0].price = 22;
    prod[0].unit = 5;

    prod[1].id = 1;
    strcpy(prod[1].name, "Test");
    prod[1].price = 22;
    prod[1].unit = 5;

    int items_cnt = sizeof(prod) / sizeof(prod[0]);
    
    int choice = menu();
    do {
        switch (choice) {
        case 1:
            display(prod, items_cnt);
            choice = menu();
            break;
        case 2:
            sale();
            choice = menu();
            break;
        case 3:
            update();
            choice = menu();
            break;
        case 0:
            return 0;
        default:
            printf("Unknown option\n");
            choice = menu();
            break;
        }
    } while (choice != 0);
    

    return 0;
}