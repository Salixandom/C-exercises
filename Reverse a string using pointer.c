#include <stdio.h>
#include <string.h>
int main()
{
    char st[50],temp;
    int x,z;
    printf("Enter your string: ");
    gets(st);
    z=strlen(st);
    for(x=0 ; x<z/2 ; x++)
    {
        temp=*(st+x);
        *(st+x)=*(st+z-x);
        *(st+z-x)=temp;
    }
    printf("\nThe reverse string is: ");
    for(x=0 ; x<=z ; x++)
        printf("%c",*(st+x));
    printf("\n");
}
