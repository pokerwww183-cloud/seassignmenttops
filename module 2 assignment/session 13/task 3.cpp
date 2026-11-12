#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "a");

    if(file == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    fprintf(file, "Chaleya\n");
    fprintf(file, "Heeriye\n");

    fclose(file);

    printf("Two songs added successfully.");

    return 0;
}
