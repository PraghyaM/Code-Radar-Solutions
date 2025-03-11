#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n;
    float total_marks = 0.0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d (Roll No, Name, Marks):\n", i + 1);
        scanf("%d", &students[i].roll_number);
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        scanf("%f", &students[i].marks);

        total_marks += students[i].marks;
    }

    float average_marks = total_marks / n;
    printf("Average marks of students: %.2f\n", average_marks);

    return 0;
}
