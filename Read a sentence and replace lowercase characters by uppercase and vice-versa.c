#include <stdio.h>
#include <string.h>
int main()
{
    char st[100];
    int x;
    printf("Enter your text: ");
    gets(st);
    printf("\nAfter case changed the string is: ");
    for(x=0 ; st[x]!=0 ; x++)
    {
        if(st[x]>='A' && st[x]<='Z')
            printf("%c",st[x]+=32);
        else if(st[x]>='a' && st[x]<='z')
            printf("%c",st[x]-=32);
    }
    printf("\n");
}


/*

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char st[100],ch;
    int x;
    printf("Enter your text: ");
    gets(st);
    printf("\nAfter case changed the string is: ");
    for(x=0 ; st[x]!=0 ; x++)
    {
        ch=islower(st[x]) ? toupper(st[x]) : tolower(st[x]);
        putchar(ch);
    }
    printf("\n");
}

*/
