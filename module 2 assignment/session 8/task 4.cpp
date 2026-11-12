#include <stdio.h>
#include <string.h>

char* formatPrice(int price) {
    static char formatted[50];

    if (price >= 1000) {
        sprintf(formatted, "\xE2\x82\xB9%d,%03d", price / 1000, price % 1000);
    } else {
        sprintf(formatted, "\xE2\x82\xB9%d", price);
    }

    return formatted;
}

int main() {
    printf("Laptop: %s\n", formatPrice(1599));
    printf("Headphones: %s\n", formatPrice(2499));
    printf("Keyboard: %s\n", formatPrice(799));

    return 0;
}
