#include <stdio.h>

int main()
{
    int minutes[7];
    int i;
    int total = 0;

    printf("Music Listening Logger\n");
    printf("----------------------\n");

    // Take listening time for each day
    for(i = 0; i < 7; i++)
    {
        printf("Enter minutes listened on day %d: ", i + 1);
        scanf("%d", &minutes[i]);

        total += minutes[i];
    }

    // Display the stored data
    printf("\nMusic listening time for the week:\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }

    printf("\nTotal listening time: %d minutes\n", total);

    return 0;
}
