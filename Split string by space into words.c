#include <stdio.h>
int main()
{
    char st[100];
    int x;
    printf("Enter your text: ");
    gets(st);
    printf("\nAfter splitting: \n\n");
    for(x=0 ; st[x]!=0 ; x++)
    {
        if(st[x]==' ')
        {
            printf("\n");
            continue;
        }
        printf("%c",st[x]);
    }
    printf("\n");
}
