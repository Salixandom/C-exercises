#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);
    if(isupper(ch))
        printf("\n%c is an Uppercase character\n",ch);
    else
        printf("\n%c is not an Uppercase character\n",ch);
}
