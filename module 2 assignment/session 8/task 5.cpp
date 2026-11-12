#include <stdio.h>
#include <ctype.h>

void capitalize(char str[]) {
    str[0] = toupper(str[0]);
}

int main() {
    char product[] = "laptop";
    char username[] = "saniya";

    capitalize(product);
    capitalize(username);

    printf("Product: %s\n", product);
    printf("Username: %s\n", username);

    return 0;
}
