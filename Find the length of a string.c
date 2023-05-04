#include <stdio.h>
int main()
{
    char st[500];
    int i=0;
    printf("Enter your line: ");
    gets(st);
    while(st[i]!=0)
        i++;
    printf("\nThere are %d characters in your text(regarding space as a character)\n",i);
}
