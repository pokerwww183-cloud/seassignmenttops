#include <stdio.h>

int main()
{
    int orders[5] = {250, 450, 300, 600, 150};
    int *ptr = orders;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Order amount = %d, Address = %p\n",
               *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}
