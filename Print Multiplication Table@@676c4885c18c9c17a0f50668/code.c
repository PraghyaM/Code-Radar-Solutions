#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=n+i){
        printf("%d * %d = %d",n,i,n*i);
    }
    printf("\n");
    return 0;
}