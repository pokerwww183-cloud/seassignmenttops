#include <stdio.h>

int main() {
    // Declare variables
    char productName[] = "Samsung Galaxy M14";
    float price = 12999.99f;
    double rating = 4.6;

    // Print variables with their data types
    printf("Product Name: %s\tData Type: string\n", productName);
    printf("Price: %.2f\t\tData Type: float\n", price);
    printf("Rating: %.1lf\t\tData Type: double\n", rating);

    return 0;
}
