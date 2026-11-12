
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollno;
    float marks;
    char grade;
};

void assignGrade(struct Student *s) {
    if (s->marks >= 90) {
        s->grade = 'A';
    }
    else if (s->marks >= 75) {
        s->grade = 'B';
    }
    else if (s->marks >= 60) {
        s->grade = 'C';
    }
    else if (s->marks >= 45) {
        s->grade = 'D';
    }
    else {
        s->grade = 'F';
    }
}


void printTopper(struct Student students[], int n) {
    int topIndex = 0;
    int i;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("\n===== Top Performer =====\n");
    printf("Name  : %s\n", students[topIndex].name);
    printf("Marks : %.2f\n", students[topIndex].marks);
}

int main() {
    struct Student students[3];
    int i;

    
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollno);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        
        assignGrade(&students[i]);
    }

    printf("\n================ Student Records ================\n");
    printf("%-20s %-10s %-10s %-10s\n",
           "Name", "Roll No", "Marks", "Grade");
    printf("--------------------------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("%-20s %-10d %-10.2f %-10c\n",
               students[i].name,
               students[i].rollno,
               students[i].marks,
               students[i].grade);
    }

    printTopper(students, 3);

    return 0;
}
