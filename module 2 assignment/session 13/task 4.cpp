#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char song[100];
    char temp[100];
    int i;

    file = fopen("playlist.txt", "r");

    if(file == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("Songs containing 'love':\n");

    while(fgets(song, sizeof(song), file) != NULL)
    {
        strcpy(temp, song);

        // Convert the song name to lowercase
        for(i = 0; temp[i] != '\0'; i++)
        {
            temp[i] = tolower(temp[i]);
        }

        if(strstr(temp, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}
