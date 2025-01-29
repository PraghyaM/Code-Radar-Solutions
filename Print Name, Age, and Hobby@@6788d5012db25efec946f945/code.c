#include <stdio.h>

int main()
{
    char name[100];
    int age;
    char hobby;
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%c",&hobby);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c",hobby);
    return 0;
}