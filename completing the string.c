#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int x,i,y,z;
    x=strlen(str);
    for(i=0 ; i<=x ; i++)
    {
        if(str[i]=='-')
            break;
    }
    y=str[i+1]-str[i-1];
    for(z=0 ; z<=y ; z++)
        printf("%c",str[i-1]+z);
}