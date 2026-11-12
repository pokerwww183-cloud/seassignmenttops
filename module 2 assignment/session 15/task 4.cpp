#include <stdio.h>

int main()
{
    FILE *file;
    int minutes;
    int total = 0;
    int highest = 0;
    int count = 0;
    float average;

    // Open the saved music log file in read mode
    file = fopen("music_log.txt", "r");

    if(file == NULL)
    {
        printf("Music log file could not be opened!\n");
        return 1;
    }

    // Read each listening time from the file
    while(fscanf(file, "%d", &minutes) == 1)
    {
        total += minutes;

        // Find the highest listening time
        if(minutes > highest)
        {
            highest = minutes;
        }

        count++;
    }

    fclose(file);

    // Calculate the average
    if(count > 0)
    {
        average = (float)total / count;

        printf("\n===== Weekly Music Report =====\n");
        printf("Total listening time: %d minutes\n", total);
        printf("Average listening time: %.2f minutes\n", average);
        printf("Highest listening time: %d minutes\n", highest);
    }
    else
    {
        printf("No listening data found.\n");
    }

    return 0;
}
