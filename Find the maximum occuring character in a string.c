#include <stdio.h>
int main()
{
    char st[100];
    int count=0,temp=0,x,y,z;
    printf("Enter your text: ");
    gets(st);
    for(x=0 ; st[x]!=0 ; x++)
    {
        for(y=x+1 ; st[y]!=0 ; y++)
            if(st[x]==st[y])
                count++;
        if(count>temp)
        {
            temp=count;
            z=x;
        }
        count=0;
    }
    printf("\nThe highest frequency of character '%c' appears number of times %d\n",st[z],temp+1);
}
