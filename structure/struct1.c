#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[5];   // marks of 5 subjects
    float avg;
    char grade;
};

int main() {
    int n, i, j, topIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        float total = 0;
        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++) {
            scanf("%f", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        // Average
        s[i].avg = total / 5;

        // Grade
        if(s[i].avg >= 90)
            s[i].grade = 'A';
        else if(s[i].avg >= 75)
            s[i].grade = 'B';
        else if(s[i].avg >= 60)
            s[i].grade = 'C';
        else if(s[i].avg >= 50)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';

        // Highest average tracking
        if(s[i].avg > s[topIndex].avg) {
            topIndex = i;
        }
    }

    // Output
    printf("\n--- Student Report ---\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d | Name: %s | Avg: %.2f | Grade: %c\n",
               s[i].roll, s[i].name, s[i].avg, s[i].grade);
    }

    // Highest average student
    printf("\nTop Student:\n");
    printf("Name: %s | Avg: %.2f | Grade: %c\n",
           s[topIndex].name, s[topIndex].avg, s[topIndex].grade);

    return 0;
}