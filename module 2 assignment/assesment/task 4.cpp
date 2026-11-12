
#include <stdio.h>

struct Expense {
    char category[30];
    float amount;
};

int main() {
    struct Expense expenses[10];
    int count = 0;
    int choice;
    int i;
    float total;

    do {
        printf("\n===== Personal Expense Logger =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (count >= 10) {
                    printf("Expense limit reached! Cannot add more than 10 expenses.\n");
                } else {
                    printf("Enter expense category: ");
                    scanf(" %[^\n]", expenses[count].category);

                    printf("Enter expense amount: ");
                    scanf("%f", &expenses[count].amount);

                    if (expenses[count].amount < 0) {
                        printf("Amount cannot be negative.\n");
                    } else {
                        count++;
                        printf("Expense added successfully!\n");
                    }
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No expenses recorded yet.\n");
                } else {
                    total = 0;

                    printf("\n========== All Expenses ==========\n");
                    printf("%-5s %-20s %-10s\n",
                           "No.", "Category", "Amount");
                    printf("------------------------------------------\n");

                    for (i = 0; i < count; i++) {
                        printf("%-5d %-20s %.2f\n",
                               i + 1,
                               expenses[i].category,
                               expenses[i].amount);

                        total += expenses[i].amount;
                    }

                    printf("------------------------------------------\n");
                    printf("Running Total: %.2f\n", total);
                }
                break;

            case 3: {
                FILE *file;

                file = fopen("expenses.txt", "w");

                if (file == NULL) {
                    printf("Error: Could not create expenses.txt\n");
                    return 1;
                }

                for (i = 0; i < count; i++) {
                    fprintf(file, "%s,%.2f\n",
                            expenses[i].category,
                            expenses[i].amount);
                }

                fclose(file);

                printf("Expenses saved to expenses.txt\n");
                printf("Exiting program. Goodbye!\n");
                break;
            }

            default:
                printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}
