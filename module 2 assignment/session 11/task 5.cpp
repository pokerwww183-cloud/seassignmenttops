#include <stdio.h>

int main()
{
    int likes = 500;
    int *ptrLikes;

    // Store the address of likes in ptrLikes
    ptrLikes = &likes;

    printf("Likes = %d\n", likes);
    printf("Address of likes = %p\n", (void *)&likes);
    printf("Address stored in ptrLikes = %p\n", (void *)ptrLikes);

    return 0;
}
