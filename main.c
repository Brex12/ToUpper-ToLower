#include <stdio.h>
#include <stdlib.h>

char toUpper(char x);
char toLower(char x);

int main()
{
    printf("%c", toUpper('x'));
    printf("\n%c", toLower('X'));
}

char toUpper(char x){
    return x - 32;
}

char toLower(char x){
    return x + 32;
}
