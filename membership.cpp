#include <stdio.h>
#include <string.h>

int main() {
    char membership[10];
    float price, discount, final_price;

    // Taking input for membership status
    printf("Enter the membership status (Gold/Silver/None): ");
    scanf("%s", membership);

    // Taking input for the price of the product
    printf("Enter the product price: ");
    scanf("%f", &price);

    // Checking membership status and calculating discount
    if (strcmp(membership, "Gold") == 0) {
        discount = 0.20 * price;
        final_price = price - discount;
        printf("Gold member: 20%% discount applied.\n");
    } 
    else if (strcmp(membership, "Silver") == 0) {
        discount = 0.10 * price;
        final_price = price - discount;
        printf("Silver member: 10%% discount applied.\n");
    } 
    else {
        discount = 0.0;
        final_price = price;
        printf("No discount applied.\n");
    }

    // Displaying the final price after discount
    printf("The final price after discount is: %.2f\n", final_price);

    return 0;
}
