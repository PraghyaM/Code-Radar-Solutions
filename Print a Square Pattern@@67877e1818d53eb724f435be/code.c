#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){ //j can also be taken in place of i
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}