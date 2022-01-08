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
    if(x >= 'a' && x <= 'z'){
        return x - 32;
    }
    return x;
}

char toLower(char x){
    if(x >= 'A' && x <= 'Z'){
        return x + 32;
    }
    return x;
}
