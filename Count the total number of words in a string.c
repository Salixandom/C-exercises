#include <stdio.h>
int main()
{
    char st[100];
    int i=0,count=1;
    printf("Enter your text: ");
    gets(st);
    while(st[i]!=0)
    {
        if(st[i]==' ')
            count++;
        i++;
    }
    for(int x=i-1 ; x>=0 ; x--)
    {
        if(st[x]==' ')
        {
            count--;
        }
        else
            break;
    }
    printf("\nThere are %d words in the string\n",count);
}
