#include <stdio.h>
#include <ctype.h>
int main()
{
    char yoo;
    if (yoo == 'a' || yoo == 'e' || yoo == 'i' || yoo == 'o' || yoo == 'u' || 
        yoo == 'A' || yoo == 'E' || yoo == 'I' || yoo == 'O' || yoo == 'U') {
        printf("%c", yoo);
    }
    else if(isdigit(yoo)){
        printf("Digit");
    }
    return 0;
}