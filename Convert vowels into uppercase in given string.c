#include <stdio.h>
#include <ctype.h>
int main()
{
    char st[100];
    int x;
    printf("Enter your text: ");
    gets(st);
    printf("\nAfter converting the text is: ");
    for(x=0 ; st[x]!=0 ; x++)
    {
        if(st[x]=='a' || st[x]=='e' || st[x]=='i' || st[x]=='o' || st[x]=='u')
            st[x]=toupper(st[x]);
        printf("%c",st[x]);
    }
    printf("\n");
}
