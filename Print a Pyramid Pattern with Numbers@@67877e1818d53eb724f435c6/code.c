#include<stdio.h>
int main()
{
    int n,nst,nsp;
    scanf("%d",&d);
    nst=1;
    nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("%d",k);
        }
        printf("\n");
        nst=nst+2;
        nsp=nsp-1;
    }
    return 0;
}