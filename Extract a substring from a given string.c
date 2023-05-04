#include <stdio.h>
#include <string.h>

int main()
{
    char st[100];
    int x,y,i;
    printf("Enter your text: ");
    gets(st);
    printf("\nInput the position to start extraction: ");
    scanf("%d",&x);
    printf("Input the length of substring: ");
    scanf("%d",&y);
    printf("\nThe extracted string is: \" ");
    for(i=x-1 ; i<=x+y-1 ; i++)
        printf("%c",st[i]);
    printf("\"\n");
}
