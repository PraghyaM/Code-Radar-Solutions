#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a & 0*800000000){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}