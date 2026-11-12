#include <stdio.h>

int main()
{
    int minutes[7] = {0};
    int choice;
    int day;
    int i;
    int total;
    int highest;
    float average;
    char confirm;
    FILE *file;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log listening minutes\n");
        printf("2. View weekly report\n");
        printf("3. Reset weekly data\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Log listening minutes
        if(choice == 1)
        {
            printf("Enter day number (1-7): ");
            scanf("%d", &day);

            if(day >= 1 && day <= 7)
            {
                printf("Enter listening minutes: ");
                scanf("%d", &minutes[day - 1]);

                // Save the updated data to the file
                file = fopen("music_log.txt", "w");

                if(file == NULL)
                {
                    printf("File could not be opened!\n");
                }
                else
                {
                    for(i = 0; i < 7; i++)
                    {
                        fprintf(file, "%d\n", minutes[i]);
                    }

                    fclose(file);

                    printf("Listening time saved successfully!\n");
                }
            }
            else
            {
                printf("Invalid day number!\n");
            }
        }

        // View weekly report
        else if(choice == 2)
        {
            file = fopen("music_log.txt", "r");

            if(file == NULL)
            {
                printf("No saved music data found.\n");
            }
            else
            {
                total = 0;
                highest = 0;
                i = 0;

                // Read data from the file
                while(i < 7 && fscanf(file, "%d", &minutes[i]) == 1)
                {
                    total += minutes[i];

                    if(minutes[i] > highest)
                    {
                        highest = minutes[i];
                    }

                    i++;
                }

                fclose(file);

                if(i > 0)
                {
                    average = (float)total / i;

                    printf("\n===== Weekly Report =====\n");
                    printf("Total: %d minutes\n", total);
                    printf("Average: %.2f minutes\n", average);
                    printf("Highest: %d minutes\n", highest);
                }
                else
                {
                    printf("No listening data available.\n");
                }
            }
        }

        // Reset weekly data
        else if(choice == 3)
        {
            printf("Are you sure you want to reset all weekly data? (y/n): ");
            scanf(" %c", &confirm);

            if(confirm == 'y' || confirm == 'Y')
            {
                // Clear the array
                for(i = 0; i < 7; i++)
                {
                    minutes[i] = 0;
                }

                // Open the file in write mode to clear its contents
                file = fopen("music_log.txt", "w");

                if(file != NULL)
                {
                    fclose(file);
                    printf("Weekly data has been reset successfully!\n");
                }
                else
                {
                    printf("Could not clear the music log file.\n");
                }
            }
            else
            {
                printf("Reset cancelled.\n");
            }
        }

        // Exit
        else if(choice == 4)
        {
            printf("Thank you for using Music Listening Logger!\n");
        }

        else
        {
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}
