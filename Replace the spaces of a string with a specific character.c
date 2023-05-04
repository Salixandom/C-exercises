#include <stdio.h>
int main()
{
    char st[100],ch;
    int x;
    printf("Enter your text: ");
    gets(st);
    printf("Enter the character you want to replace with: ");
    ch=getchar();
    for(x=0 ; st[x]!=0 ; x++)
        if(st[x]==' ')
            st[x]=ch;
    printf("\nAfter replacing the string becomes: %s\n",st);
}
