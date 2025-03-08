#include<stdio.h>
int main()
{
    int n,a,d,nsp,nst;
    scanf("%d",&n);
    nsp=n-1;
    nst=1;
    a=64;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
           d=a+1;
           char ch=(char)d;
           printf("%c",ch);
        }
        printf("\n");
        nsp=nsp-1;
        nst=nst+1;
    }
    return 0;
}