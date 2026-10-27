#include <stdio.h>

#define TOTAL_PRODUCT 10

int main() {
    struct product {
        char name[64];
        int price;
        int stock;
    };

    struct product product_lists[TOTAL_PRODUCT];

    // Input products
    for (int i = 0; i < TOTAL_PRODUCT; i++) {
        printf("Product %d\n", i + 1);

        printf("\tEnter name: ");
        scanf("%s", product_lists[i].name);

        printf("\tEnter price: ");
        scanf("%d", &product_lists[i].price);

        printf("\tEnter stock: ");
        scanf("%d", &product_lists[i].stock);
    }

    int optn;
    int product_index;
    int buy_qty;

    // Menu
    do {
        printf("\n\nEnter operation:\n");
        printf("1: Buy product\n");
        printf("2: Show items\n");
        printf("0: Exit\n");
        printf(">> ");
        scanf("%d", &optn);

        switch (optn) {

            // Buy product
            case 1:
                printf("\nSelect product (1-%d): ", TOTAL_PRODUCT);
                scanf("%d", &product_index);

                while (product_index < 1 || product_index > TOTAL_PRODUCT) {
                    printf("OUT OF RANGE!!!\n");
                    printf("Select product (1-%d): ", TOTAL_PRODUCT);
                    scanf("%d", &product_index);
                }

                // Convert user input 1-3 to array index 0-2
                product_index--;

                printf("Enter quantity: ");
                scanf("%d", &buy_qty);

                while (buy_qty < 0 || buy_qty > product_lists[product_index].stock) {
                    if (buy_qty < 0) {
                        printf("QUANTITY CANNOT BE NEGATIVE!!!\n");
                    } else {
                        printf("TOO MUCH!!!\n");
                        printf("Available stock: %d\n",
                               product_lists[product_index].stock);
                    }

                    printf("Enter quantity: ");
                    scanf("%d", &buy_qty);
                }

                product_lists[product_index].stock -= buy_qty;

                printf("Purchase successful!\n");

                break;

            // Show products
            case 2:
                printf("\n======= PRODUCT SUMMARY =======\n");

                for (int i = 0; i < TOTAL_PRODUCT; i++) {
                    printf("\nProduct %d\n", i + 1);
                    printf("\tName: %s\n", product_lists[i].name);
                    printf("\tPrice: %d\n", product_lists[i].price);
                    printf("\tStock: %d\n", product_lists[i].stock);
                }

                break;

            // Exit
            case 0:
                printf("\nExit program.\n");
                break;

            // Invalid option
            default:
                printf("\nINVALID OPTION!!!\n");
                break;
        }

    } while (optn != 0);

    return 0;
}
