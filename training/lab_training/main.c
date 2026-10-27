#include <stdio.h>

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

void display() {

}

void sale() {

}

void update() {

}

int main() {
    // Sales program
    // Read text files
    // Update text files

    int choice = menu();

    switch (choice) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            return 0;
        default:
            break;
    }

    return 0;
}