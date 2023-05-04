#include <stdio.h>
int main()
{
    char st[100];
    int x;
    printf("Enter your text: ");
    gets(st);
    printf("\nAfter removing the String: ");
    for(x=0 ; st[x]!=0 ; x++)
    {
        if((st[x]>='A' && st[x]<='Z') || (st[x]>='a' && st[x]<='z'))
            printf("%c",st[x]);
        else
            continue;
    }
    printf("\n");
}
