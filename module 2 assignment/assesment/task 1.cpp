
#include <stdio.h>

int main() {
    float percentage;

    printf("Enter student's percentage: ");
    scanf("%f", &percentage);

    // Check for invalid input
    if (percentage < 0 || percentage > 100) {
        printf("Error: Percentage must be between 0 and 100.\n");
        return 0;
    }

    // Assign grade using if-else if
    if (percentage >= 90) {
        printf("Grade: A\n");
        printf("Excellent work! Keep it up.\n");
    }
    else if (percentage >= 75) {
        printf("Grade: B\n");
        printf("Good work! Keep pushing.\n");
    }
    else if (percentage >= 60) {
        printf("Grade: C\n");
        printf("Nice effort! You can do even better.\n");
    }
    else if (percentage >= 45) {
        printf("Grade: D\n");
        printf("Keep working hard and improve your score.\n");
    }
    else {
        printf("Grade: F\n");
        printf("Don't give up! Learn from this and try again.\n");
    }

    return 0;
}

