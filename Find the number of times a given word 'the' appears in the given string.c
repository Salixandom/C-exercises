#include <stdio.h>
int main()
{
    char st[100];
    int x,count=0,t,h,e;
    printf("Enter your text: ");
    gets(st);
    for(x=0 ; st[x]!=0 ; x++)
    {
        t=(st[x]=='t' || st[x]=='T');
        h=(st[x+1]=='h' || st[x+1]=='H');
        e=(st[x+2]=='e' || st[x+2]=='E');
        if(t&&h&&e)
            count++;
    }
    printf("\nThe frequency of the word 'the' is: %d\n",count);
}
