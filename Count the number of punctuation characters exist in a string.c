#include <stdio.h>
int main()
{
    char st[100];
    int x,count=0;
    printf("Enter your text: ");
    gets(st);
    for(x=0 ; st[x]!=0 ; x++)
    {
        if(st[x]=='.' || st[x]==',' || st[x]=='?' || st[x]=='!' || st[x]==';' || st[x]==':')
            count++;
    }
    printf("\nThe punctuation characters exist in the string is: %d\n",count);
}
