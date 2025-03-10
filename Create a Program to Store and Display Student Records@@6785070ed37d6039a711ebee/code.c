#include<stdio.h>
int main()
{
    struct student{
        int roll_no;
        char name[50];
        float marks;
    };
    struct student stud[1000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&stud[i].roll_no);
        scanf("%s",&stud[i].name);
        scanf("%f",&stud[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number:%d, "stud[i].roll_no);
        printf("Name:%s, "stud[i].name);
        printf("Marks:%2f\n "stud[i].marks);
    }   
    return 0;
}