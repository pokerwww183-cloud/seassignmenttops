#include <stdio.h>

int main() {
    int a[10], i, j, temp;
    int max, min;
    float mean;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for (i = 1; i < 10; i++) {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    mean = 0;
    for (i = 0; i < 10; i++)
        mean += a[i];

    mean = mean / 10;

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nMean = %.2f\n", mean);

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted list: ");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);

    if (mean - min < max - mean)
        printf("\n\nMean is closer to minimum.");
    else if (mean - min > max - mean)
        printf("\n\nMean is closer to maximum.");
    else
        printf("\n\nMean is exactly midway.");

    return 0;
}
