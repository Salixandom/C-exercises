#include <stdio.h>
int main()
{
    char st[100],fx[100];
    int x,y,count=1;
    printf("Enter your text: ");
    gets(st);
    printf("\nThe frequency of the characters are: \n\n");
    for(x=0 ; st[x]!=0 ; x++)
    {
        for(y=x+1 ; st[y]!=0 ; y++)
        {
            if(st[x]==st[y])
            {
                count++;
                fx[y]=2;
            }
        }
        if(fx[x]!=2)
            printf("%c occurs %d time\n",st[x],count);
        count=1;
    }
}
