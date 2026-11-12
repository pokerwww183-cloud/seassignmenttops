#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "w");

    if(file == NULL)
    {
        printf("File could not be created.");
        return 1;
    }

    fprintf(file, "Tum Hi Ho\n");
    fprintf(file, "Kesariya\n");
    fprintf(file, "Apna Bana Le\n");

    fclose(file);

    printf("Songs written to playlist.txt successfully.");

    return 0;
}
