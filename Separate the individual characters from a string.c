#include <stdio.h>
int main()
{
    char st[100];
    int i;
    printf("Enter your text: ");
    gets(st);
    printf("\n");
    while(st[i]!=0)
    {
        printf("%c ",st[i]);
        i++;
    }
    printf("\n");
}
