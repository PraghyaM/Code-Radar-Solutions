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
    else if ((yoo >= 'a' && yoo <= 'z') || (yoo >= 'A' && yoo <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    }
    else{
        printf("Special character");
    }
    return 0;
}