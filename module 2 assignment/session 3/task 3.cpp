#include <stdio.h>

int main() {
    const float GST_RATE = 18.0;   // Constant GST rate 
    float basePrice, gstAmount, finalPrice;

    
    printf("Enter the base price of the Zomato order: ");
    scanf("%f", &basePrice);

    
    gstAmount = (basePrice * GST_RATE) / 100;
    finalPrice = basePrice + gstAmount;

    
    printf("Base Price: %.2f\n", basePrice);
    printf("GST (%.0f%%): %.2f\n", GST_RATE, gstAmount);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}
