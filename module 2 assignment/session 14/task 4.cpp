#include <stdio.h>

int main()
{
    int i;

    // Check each number from 1 to 10
    for(i = 1; i <= 10; i++)
    {
        // If the number is divisible by 2, it is even
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
