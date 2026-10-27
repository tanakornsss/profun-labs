#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 1000

typedef struct {
    char name[256];
    int price;
    int in_stock;
} Product;

// Count products in file
int count_products(char* fname) {
    FILE* f = fopen(fname, "r");

    if (f == NULL) {
        return 0;
    }

    char str[1024];
    int count = 0;
    Product p;

    while (fgets(str, sizeof(str), f) != NULL) {
        if (sscanf(str, "%255s %d %d",
                   p.name, &p.price, &p.in_stock) == 3) {
            count++;
        }
    }

    fclose(f);
    return count;
}

// Display products
void read_prod(char* fname) {
    FILE* f = fopen(fname, "r");

    printf("\n--- Product List ---\n");

    if (f == NULL) {
        printf("No products available.\n");
        return;
    }

    char str[1024];
    int count = 0;

    while (fgets(str, sizeof(str), f) != NULL) {
        Product p;

        if (sscanf(str, "%255s %d %d",
                   p.name, &p.price, &p.in_stock) == 3) {
            printf("%s | Price: %d | Stock: %d\n",
                   p.name, p.price, p.in_stock);
            count++;
        }
    }

    if (count == 0) {
        printf("No products available.\n");
    }

    fclose(f);
}

// Add new product
int add_prod(char* fname, Product prod) {
    FILE* f = fopen(fname, "a");

    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(f, "%s %d %d\n",
            prod.name, prod.price, prod.in_stock);

    fclose(f);
    return 0;
}

// Change stock: 0 = success, 1 = error,
// 2 = product not found, 3 = insufficient stock
int change_stock(char* fname, char* prod_name,
                 int quantity, int is_sale) {
    if (quantity <= 0) {
        printf("Quantity must be greater than zero.\n");
        return 1;
    }

    FILE* f = fopen(fname, "r");

    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    Product products[MAX_PRODUCTS];
    char str[1024];
    int count = 0;
    int found = -1;

    while (fgets(str, sizeof(str), f) != NULL) {
        Product p;

        if (sscanf(str, "%255s %d %d",
                   p.name, &p.price, &p.in_stock) != 3) {
            continue;
        }

        if (count >= MAX_PRODUCTS) {
            printf("Too many products.\n");
            fclose(f);
            return 1;
        }

        products[count] = p;

        if (strcmp(p.name, prod_name) == 0) {
            found = count;
        }

        count++;
    }

    fclose(f);

    if (found == -1) {
        printf("Product not found.\n");
        return 2;
    }

    if (is_sale) {
        if (products[found].in_stock < quantity) {
            printf("Not enough stock.\n");
            return 3;
        }

        products[found].in_stock -= quantity;
    }
    else {
        products[found].in_stock += quantity;
    }

    f = fopen(fname, "w");

    if (f == NULL) {
        printf("Error writing file.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(f, "%s %d %d\n",
                products[i].name,
                products[i].price,
                products[i].in_stock);
    }

    fclose(f);
    return 0;
}

int update_prod_stock(char* fname, char* prod_name,
                      int quantity) {
    return change_stock(fname, prod_name, quantity, 0);
}

int sell_prod(char* fname, char* prod_name,
              int quantity) {
    return change_stock(fname, prod_name, quantity, 1);
}

// Menu for adding a new product
void add_product_menu(char* fname) {
    Product prod;

    printf("Enter product name: ");
    if (scanf("%255s", prod.name) != 1) return;

    printf("Enter price: ");
    if (scanf("%d", &prod.price) != 1 || prod.price < 0) {
        printf("Invalid price.\n");
        return;
    }

    printf("Enter initial stock: ");
    if (scanf("%d", &prod.in_stock) != 1 ||
        prod.in_stock < 0) {
        printf("Invalid stock.\n");
        return;
    }

    if (add_prod(fname, prod) == 0) {
        printf("Product added successfully.\n");
    }
}

// Menu for adding stock
void add_stock_menu(char* fname, char* name) {
    int quantity;

    printf("Enter quantity to add: ");

    if (scanf("%d", &quantity) != 1 || quantity <= 0) {
        printf("Invalid quantity.\n");
        return;
    }

    update_prod_stock(fname, name, quantity);
}

int main() {
    char op;
    char fname[] = "products.txt";

    printf("My stock system\n");

    // If inventory is empty, add a product first
    if (count_products(fname) == 0) {
        printf("\nInventory is empty. Add your first product.\n");
        add_product_menu(fname);
        read_prod(fname);
    }

    while (1) {
        printf("\n[a] Add product\n");
        printf("[b] Add existing product stock\n");
        printf("[c] Sell product\n");
        printf("[d] Quit\n");

        printf("Enter your options: ");

        if (scanf(" %c", &op) != 1) {
            break;
        }

        switch (op) {
        case 'a':
            add_product_menu(fname);
            break;

        case 'b': {
            char name[256];

            printf("Enter product name: ");
            if (scanf("%255s", name) != 1) {
                break;
            }

            if (count_products(fname) == 0) {
                printf("Inventory is empty. Add a new product first.\n");
                add_product_menu(fname);
            }
            else {
                int result = change_stock(fname, name, 1, 0);

                if (result == 2) {
                    printf("Product does not exist. Add it first.\n");
                    add_product_menu(fname);
                }
                else if (result == 0) {
                    // Undo the test increment; ask actual quantity.
                    change_stock(fname, name, 1, 1);
                    add_stock_menu(fname, name);
                }
            }
            break;
        }

        case 'c': {
            char name[256];
            int quantity;

            printf("Enter product name: ");
            if (scanf("%255s", name) != 1) {
                break;
            }

            printf("Enter quantity to sell: ");
            if (scanf("%d", &quantity) != 1 || quantity <= 0) {
                printf("Invalid quantity.\n");
                break;
            }

            int result = sell_prod(fname, name, quantity);

            if (result == 3) {
                printf("Would you like to add stock now? (y/n): ");

                char answer;
                if (scanf(" %c", &answer) == 1 &&
                    (answer == 'y' || answer == 'Y')) {
                    add_stock_menu(fname, name);
                }
            }
            else if (result == 2) {
                printf("Product does not exist. Add it first.\n");
                add_product_menu(fname);
            }
            break;
        }
        case 'd':
            printf("Goodbye!\n");
            return 0;

        default:
            printf("Invalid option.\n");
        }

        // Display inventory after each operation
        read_prod(fname);
    }

    return 0;
}