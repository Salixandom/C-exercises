#include <stdio.h>
int main()
{
    char st[100],temp;
    int x,y;
    printf("Enter your text: ");
    gets(st);
    for(x=0 ; st[x]!=0 ; x++)
    {
        for(y=x+1 ; st[y]!=0 ; y++)
        {
            if(st[y]<st[x])
            {
                temp=st[y];
                st[y]=st[x];
                st[x]=temp;
            }
        }
    }
    printf("\nAfter sorting the string appears like: \n");
    puts(st);
}
