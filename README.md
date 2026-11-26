# Smart Canteen Billing System - UPES

A small, menu-driven C program for preparing a canteen order and calculating its bill. It is designed as an easy-to-follow Mini Hackathon project for the C Programming Lab.

> The menu and prices in this project are sample values for demonstration. They are not official UPES canteen prices.

## Problem statement

Taking canteen orders and adding prices by hand can take time and may lead to calculation mistakes. This program lets a user choose items, enter quantities, and view the order total.

## Team details

- **Team number:** 3
- **Batch:** 58
- **Team member:** Soham Sharma
- **SAP ID:** 590038013

## Objectives

- Show a short canteen menu.
- Store the customer's name and SAP ID.
- Add selected items and quantities to an order.
- Calculate and display each line amount and the total bill.
- Let the user view or clear the current order.
- Reject invalid menu choices and quantities.

## Features

- Simple text menu with four options.
- Prints the customer's name and SAP ID on the bill.
- Five sample food and drink items with example prices in rupees.
- Supports adding the same item more than once.
- Shows a bill with item name, quantity, unit price, amount, and total.
- Checks menu item numbers and quantities.
- Uses only the `stdio.h` header file.

## Algorithm

1. Set every item quantity in the order to zero.
2. Show the main menu: add item, view bill, clear order, or exit.
3. If the user adds an item, show the food menu and ask for an item number and quantity.
4. Add that quantity to the selected item's quantity in the order.
5. If the user views the bill, multiply each item's price by its quantity and add the amounts.
6. If the user clears the order, set all quantities back to zero.
7. If the user exits, show the final bill and end the program.

## Simple flowchart

```text
Start
  |
Set all order quantities to 0
  |
Show main menu <-----------------------------+
  |                                           |
  +-- Add item --> Choose item and quantity   |
  |                  |                        |
  |              Update order ----------------+
  |
  +-- View bill --> Calculate and display ----+
  |
  +-- Clear order --> Set quantities to 0 ----+
  |
  +-- Exit --> Show final bill --> End
```

## C concepts used

- Variables and arithmetic operators for quantities and bill amounts.
- `if` / `else` conditions to handle menu choices and validation.
- `while` and `for` loops to repeat the menu and process items.
- An array to store quantities for the menu items.
- Functions to separate menu display and bill display.
- Standard input and output using `scanf` and `printf`.

## Files

```text
Smart_Canteen_Billing_UPES/
├── README.md
└── canteen_billing.c
```

## Compile and run

You need a C compiler such as GCC.

### Windows (MinGW GCC)

Open Command Prompt or PowerShell in the project folder and run:

```bash
gcc canteen_billing.c -o canteen_billing.exe
.\canteen_billing.exe
```

### Linux or macOS

```bash
gcc canteen_billing.c -o canteen_billing
./canteen_billing
```

## Sample test cases

The outputs below show what the program displays for each case. Menu prices are the sample prices in the source file.

| Test | Input steps | Expected output | Program output |
|---|---|---|---|
| Add one item | Choose `1`, choose item `1` (Masala Chai), enter quantity `2`, choose `2` to view the bill | Masala Chai amount: `Rs. 30.00`; total: `Rs. 30.00` | Masala Chai amount: `Rs. 30.00`; total: `Rs. 30.00` |
| Add two different items | Add 2 Masala Chai, add 1 Veg Burger, then view the bill | Chai: `Rs. 30.00`; burger: `Rs. 80.00`; total: `Rs. 110.00` | Chai: `Rs. 30.00`; burger: `Rs. 80.00`; total: `Rs. 110.00` |
| Invalid choice | At the main menu, enter `8`; then enter `4` to exit | Program asks for a number from `1` to `4`, then exits | Program asks for a number from `1` to `4`, then exits |

For a complete terminal demonstration, add an item and choose **View bill**. The program prints a bill table and its total. The sample bill does not add tax or a discount.

## GitHub submission notes

Suggested repository name from the guidelines: `Batch##_Team##_SmartCanteenBilling` (replace `##` with your batch and team numbers).

Before submission:

- Fill in the team details above.
- Confirm the topic and any required menu/prices with your faculty member.
- Upload this README and `canteen_billing.c` to your GitHub repository.
- Submit the repository URL to your faculty member before the Lab 1 session ends.
- Prepare and upload the presentation for Lab 2 as required by your faculty member.
