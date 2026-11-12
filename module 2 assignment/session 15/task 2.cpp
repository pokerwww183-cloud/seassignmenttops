#include <stdio.h>

int main()
{
    int minutes[7] = {0};
    int choice;
    int day;
    int i;
    int total;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log new listening minutes\n");
        printf("2. View weekly summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter day number (1-7): ");
            scanf("%d", &day);

            if(day >= 1 && day <= 7)
            {
                printf("Enter listening minutes: ");
                scanf("%d", &minutes[day - 1]);

                printf("Listening time saved successfully!\n");
            }
            else
            {
                printf("Invalid day number!\n");
            }
        }
        else if(choice == 2)
        {
            total = 0;

            printf("\n===== Weekly Summary =====\n");

            for(i = 0; i < 7; i++)
            {
                printf("Day %d: %d minutes\n", i + 1, minutes[i]);
                total += minutes[i];
            }

            printf("Total listening time: %d minutes\n", total);
        }
        else if(choice == 3)
        {
            printf("Thank you for using Music Listening Logger!\n");
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 3);

    return 0;
}
