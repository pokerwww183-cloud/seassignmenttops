#include <stdio.h>

struct StudyLog {
    char subject[40];
    float hours[7];
};

void report(struct StudyLog s[], int n) {
    int i, j;
    float total;

    for (i = 0; i < n; i++) {
        total = 0;

        for (j = 0; j < 7; j++)
            total += s[i].hours[j];

        printf("\n%s - Total: %.1f hrs, Average: %.1f hrs\n",
               s[i].subject, total, total / 7);

        for (j = 0; j < 7; j++) {
            int k;
            printf("Day %d: ", j + 1);

            for (k = 0; k < s[i].hours[j]; k++)
                printf("*");

            printf("\n");
        }
    }
}

int main() {
    struct StudyLog s[3] = {
        {"Math", {0,0,0,0,0,0,0}},
        {"C Programming", {0,0,0,0,0,0,0}},
        {"English", {0,0,0,0,0,0,0}}
    };

    int choice, day, i, j;
    FILE *fp;

    do {
        printf("\n1. Log Study Hours");
        printf("\n2. View Report");
        printf("\n3. Save & Exit");
        printf("\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter day (1-7): ");
            scanf("%d", &day);

            for (i = 0; i < 3; i++) {
                printf("%s hours: ", s[i].subject);
                scanf("%f", &s[i].hours[day - 1]);
            }
        }

        else if (choice == 2) {
            report(s, 3);
        }

        else if (choice == 3) {
            fp = fopen("productivity_log.txt", "w");

            for (i = 0; i < 3; i++) {
                fprintf(fp, "%s", s[i].subject);

                for (j = 0; j < 7; j++)
                    fprintf(fp, ",%.1f", s[i].hours[j]);

                fprintf(fp, "\n");
            }

            fclose(fp);
            printf("Saved successfully!\n");
        }

    } while (choice != 3);

    return 0;
}
