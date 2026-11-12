#include <stdio.h>

int main() {
    int cricketScores[3][2] = {
        {180, 165},
        {145, 190},
        {175, 160}
    };

    for (int i = 0; i < 3; i++) {
        int highest = cricketScores[i][0];

        for (int j = 1; j < 2; j++) {
            if (cricketScores[i][j] > highest)
                highest = cricketScores[i][j];
        }

        printf("Match %d highest score: %d\n", i + 1, highest);
    }

    return 0;
}
