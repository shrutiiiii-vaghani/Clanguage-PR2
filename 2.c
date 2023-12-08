#include <stdio.h>

int main() {
    int unit;
    float total_bill = 0;
    
    printf("Enter electricity units: ");
    scanf("%d", &unit);//10
    
    if (unit <= 50) {
        total_bill = unit * 0.50;//10*0.50
    } else if (unit <= 150) {
        total_bill = 50 * 0.50 + (unit - 50) * 0.75;
    } else if (unit <= 250) {
        total_bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    } else {
        total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }
    
    // Calculate 20% surcharge
    total_bill += total_bill * 0.20;
    
    printf("Electricity Bill = Rs. %.2f\n", total_bill);
    
    return 0;
}

