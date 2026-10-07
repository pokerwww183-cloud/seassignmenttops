#include <stdio.h>
#include <string.h>

char tasks[5][50];
int status[5] = {0};

void markTaskDone(int index) {
    status[index] = 1;
}

int main() {
    int n, i;

    printf("Enter number of tasks (max 5): ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++) {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], 50, stdin);
        tasks[i][strcspn(tasks[i], "\n")] = '\0';
    }

    markTaskDone(1);   

    printf("\nUpdated Task List:\n");
    for(i = 0; i < n; i++) {
        printf("%d. %s", i + 1, tasks[i]);
        if(status[i])
            printf(" - DONE");
        printf("\n");
    }

    return 0;
}
