#include <stdio.h>
int main()
{
    char yoo;
    scanf("%c",&yoo);
    if (yoo == 'a' || yoo == 'e' || yoo == 'i' || yoo == 'o' || yoo == 'u' || 
        yoo == 'A' || yoo == 'E' || yoo == 'I' || yoo == 'O' || yoo == 'U') {
        printf("Vowel");
    }
    else if(yoo >= '0' && yoo <= '9'){
        printf("Digit");
    }
    else if ((yoo >= 'a' && yoo <= 'z') || (yoo >= 'A' && yoo <= 'Z')) {
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}