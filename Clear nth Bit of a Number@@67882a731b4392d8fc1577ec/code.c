#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d", a&~(1<<b));
    return 0;
}