#include <stdio.h>
#include <string.h>
int main()
{
    char st1[200],st2[100];
    int a,b,x,y;
    printf("Enter your first string: ");
    gets(st1);
    a=strlen(st1);
    printf("Enter your second string: ");
    gets(st2);
    b=strlen(st2);
    st1[a]=' ';
    for(x=a,y=0 ; x<=a+b ; x++,y++)
    {
        st1[x+1]=st2[y];
    }
    st1[x]='\0';
    printf("\nAfter Concatenation the string is: ");
    puts(st1);
}
