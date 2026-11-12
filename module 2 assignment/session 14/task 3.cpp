#include <stdio.h>

// Function to format the follower count
void formatFollowersCount(double count)
{
    // If count is 1 million or more
    if(count >= 1000000)
    {
        printf("%.1fM", count / 1000000);
    }
    // If count is 1000 or more
    else if(count >= 1000)
    {
        printf("%.1fK", count / 1000);
    }
    // If count is below 1000
    else
    {
        printf("%.0f", count);
    }
}

int main()
{
    // Display different follower counts
    printf("Followers: ");
    formatFollowersCount(1500);

    printf("\nFollowers: ");
    formatFollowersCount(1200000);

    printf("\nFollowers: ");
    formatFollowersCount(850);

    return 0;
}
