#include <stdio.h>

float average(int orders[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += orders[i];

    return (float)sum / size;
}

int main() {
    int dailyOrders[7] = {200, 350, 150, 400, 250, 300, 350};

    printf("Average weekly spend: %.2f\n",
           average(dailyOrders, 7));

    return 0;
}
