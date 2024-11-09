#include <stdio.h>

int main() {
    int units;
    float billAmount;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Bill calculation based on slabs
    if (units <= 50) {
        billAmount = units * 0.50;
    } else if (units <= 150) {
        billAmount = (50 * 0.50) + (units - 50) * 0.75;
    } else if (units <= 250) {
        billAmount = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;
    } else {
        billAmount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units - 250) * 1.50;
    }

    // Adding surcharge (e.g., 20% of the total bill amount)
    float surcharge = 0.20 * billAmount;
    billAmount += surcharge;

    // Display the total bill amount
    printf("The total electricity bill is: %.2f\n", billAmount);

    return 0;
}
