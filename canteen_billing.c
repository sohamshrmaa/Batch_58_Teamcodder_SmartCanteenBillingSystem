#include <stdio.h>

#define MENU_SIZE 5

void showMenu(void) {
    printf("\n--- UPES Canteen Menu ---\n");
    printf("1. Masala Chai   - Rs. 15\n");
    printf("2. Veg Sandwich  - Rs. 60\n");
    printf("3. Veg Burger    - Rs. 80\n");
    printf("4. Maggi         - Rs. 50\n");
    printf("5. Coffee        - Rs. 25\n");
}

void showBill(int quantity[], char customerName[], char sapId[]) {
    char *name[MENU_SIZE] = {
        "Masala Chai", "Veg Sandwich", "Veg Burger", "Maggi", "Coffee"
    };
    int price[MENU_SIZE] = {15, 60, 80, 50, 25};
    int i;
    int total = 0;

    printf("\nBILL\n");
    printf("Customer Name: %s\n", customerName);
    printf("SAP ID: %s\n", sapId);
    printf("Item\t\tQuantity\tAmount\n");

    for (i = 0; i < MENU_SIZE; i++) {
        if (quantity[i] > 0) {
            printf("%s\t%d\t\tRs. %d\n", name[i], quantity[i],
                   quantity[i] * price[i]);
            total = total + quantity[i] * price[i];
        }
    }
    
    printf("Total Bill: Rs. %d\n", total);
}

int main(void) {
    int quantity[MENU_SIZE] = {0, 0, 0, 0, 0};
    char customerName[50];
    char sapId[20];
    int choice;
    int item;
    int amount;
    int i;

    printf("Welcome to Smart Canteen Billing System - UPES\n");
    printf("Enter customer name: ");
    scanf(" %49[^\n]", customerName);
    printf("Enter SAP ID: ");
    scanf("%19s", sapId);

    do {
        printf("\n1. Add Item\n");
        printf("2. View Bill\n");
        printf("3. Clear Order\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            showMenu();
            printf("Enter item number: ");
            scanf("%d", &item);

            if (item >= 1 && item <= MENU_SIZE) {
                printf("Enter quantity: ");
                scanf("%d", &amount);

                if (amount > 0) {
                    quantity[item - 1] = quantity[item - 1] + amount;
                    printf("Item added successfully.\n");
                } else {
                    printf("Quantity must be greater than 0.\n");
                }
            } else {
                printf("Invalid item number.\n");
            }
        } else if (choice == 2) {
            showBill(quantity, customerName, sapId);
        } else if (choice == 3) {
            for (i = 0; i < MENU_SIZE; i++) {
                quantity[i] = 0;
            }
            printf("Order cleared successfully.\n");
        } else if (choice != 4) {
            printf("Invalid choice. Please enter 1 to 4.\n");
        }
    } while (choice != 4);

    showBill(quantity, customerName, sapId);
    printf("Thank you. Have a nice day!\n");

    return 0;
}
