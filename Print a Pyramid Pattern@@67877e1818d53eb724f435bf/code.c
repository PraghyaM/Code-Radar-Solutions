#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int nst=1;
    int nsp=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf(" ");
        }
        nsp=nsp-1;
        for(int i=1;i<=n;i++){
            for(int k=1;k<=nst;k++){
                printf("*");
            }
            nst=nst+2;
        }
        printf("\n");
    }
    return 0;
}