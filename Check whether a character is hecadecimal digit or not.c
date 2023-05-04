#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    int x;
    printf("Enter your character: ");
    scanf("%c",&ch);
    x=isxdigit(ch);
    if(x)
        printf("\n%c is a Hexadecimal character\n",ch);
    else
        printf("\n%c is not a Hexadecimal character\n",ch);
}
