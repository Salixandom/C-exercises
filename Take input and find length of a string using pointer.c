#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *st;
    int x,count=0;
    st=malloc(200);
    printf("Enter your text: ");
    gets(st);
    for(x=0 ; st[x]!=0 ; x++)
        count++;
    printf("The size is: %d",count);
}
