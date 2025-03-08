#include<stdio.h>
int main()
{
    int n,nst,nsp;
    scanf("%d",&n);
    nst=1;
    nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        printf("\n");
        nsp=nsp-1;
        nst=nst+2;
    }
    return 0;
}