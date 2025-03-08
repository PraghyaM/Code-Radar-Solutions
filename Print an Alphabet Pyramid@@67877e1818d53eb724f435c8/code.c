#include<stdio.h>
int main()
{
    int n;
    char ch = 'A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j='A';j<='A'+i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}