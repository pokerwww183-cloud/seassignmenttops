#include <stdio.h>
#include <string.h>

void addToCart(char cart[][50], int *size, char productName[]) {
    strcpy(cart[*size], productName);
    (*size)++;

    printf("Updated cart inside function:\n");

    for (int i = 0; i < *size; i++) {
        printf("%s\n", cart[i]);
    }
}

int main() {
    char cart[10][50] = {"Laptop", "Mouse"};
    int size = 2;

    printf("Cart before function:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", cart[i]);
    }

    addToCart(cart, &size, "Keyboard");

    printf("\nCart after function:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", cart[i]);
    }

    return 0;
}
