#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d" "%d",&a,&b);
    if(a>b){
        printf("%d",a);
    }
    else if(b>a){
        printf("%d",b);
    }
    else if(a==0 && b==0){
        printf("0");
    }
    return 0;
}