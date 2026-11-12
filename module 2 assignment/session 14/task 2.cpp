#include <stdio.h>

// Function to check whether a number is even
int isEven(int num)
{
    // If the number is divisible by 2, it is even
    if(num % 2 == 0)
    {
        return 1;   // Return 1 for true
    }
    else
    {
        return 0;   // Return 0 for false
    }
}

int main()
{
    int num = 10;

    // Call the function and check the result
    if(isEven(num))
    {
        printf("%d is an even number.", num);
    }
    else
    {
        printf("%d is an odd number.", num);
    }

    return 0;
}
