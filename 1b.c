/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>

float calculateTotalAmount(float cost) {
    return cost + (0.10 * cost); 
}

int main() {
    int customerId, productNo, quantity;
    float cost, totalAmount;
    char address[100], productName[100];

    // Input customer information
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    while (getchar() != '\n');
    printf("Enter Customer Address: ");
    fgets(address, sizeof(address), stdin);
    printf("Enter Product Number: ");
    scanf("%d", &productNo);
    while (getchar() != '\n'); 
    printf("Enter Product Name: ");
    fgets(productName, sizeof(productName), stdin);
    
    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Cost per Unit: ");
    scanf("%f", &cost);

    totalAmount = calculateTotalAmount(cost * quantity);

    printf("\n------ Billing Details ------\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Address: %s", address);
    printf("Product Number: %d\n", productNo);
    printf("Product Name: %s", productName);
    printf("Quantity: %d\n", quantity);
    printf("Cost per Unit: $%.2f\n", cost);
    printf("Total Amount (with 10%% GST): $%.2f\n", totalAmount);

    return 0;
}
