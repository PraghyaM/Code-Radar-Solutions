#include<stdio.h>
struct Student{
    int rollNumber;
    char name[50];
    float marks;
};
int main()
{
    int n;
    scanf("%d",&n);

    struct Student students[n], topSccorer;
    printf("Enter Roll Number, Name, and Marks for each student:\n");
    for(int i=0;i<n;i++){
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        
        if(i == 0 || students[i].marks > topScorer.marks){topscorer = students[i];}
    }
    printf("Top Scorer: Roll Number: %d,",stud[i].rollNumber);
    printf("Name: %s,",stud[i].name);
    printf("Marks: %.2f",stud[i].marks);
}