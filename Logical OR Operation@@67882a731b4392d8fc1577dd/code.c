#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d\n",&a);
    scanf("%d",&b);
    
    if(a||b >0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}