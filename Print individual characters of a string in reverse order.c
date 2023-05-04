#include <stdio.h>
int main()
{
    char st[100];
    int count=0,i=0;
    printf("Enter your text: ");
    gets(st);
    while(st[i]!=0)
    {
        i++;
        count++;
    }
    printf("\nThe characters of the string in reverse are: \n");
    for(i=count-1 ; i>=0 ; i--)
        printf("%c ",st[i]);
    printf("\n");
}
