#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n], topScorer; // Fixed: Correct spelling
    printf("Enter Roll Number, Name, and Marks for each student:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);

        if (i == 0 || students[i].marks > topScorer.marks) {
            topScorer = students[i]; // Fixed: Correct spelling
        }
    }

    printf("\nTop Scorer:\n");
    printf("Roll Number: %d\n", topScorer.rollNumber);
    printf("Name: %s\n", topScorer.name);
    printf("Marks: %.2f\n", topScorer.marks); // Fixed: Correct variable name

    return 0;
}
