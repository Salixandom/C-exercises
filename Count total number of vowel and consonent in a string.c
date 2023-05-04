#include <stdio.h>
int main()
{
    char st[100];
    int x,count1,count2;
    x=count1=count2=0;
    printf("Enter your text: ");
    gets(st);
    while(st[x]!=0)
    {
        if(st[x]=='a' || st[x]=='e' || st[x]=='i' || st[x]=='o' || st[x]=='u' || st[x]=='A' || st[x]=='E' || st=='I' || st[x]=='O' || st[x]=='U')
            count1++;
        else if((st[x]>='a' && st[x]<='z') || (st[x]>='A' && st[x]<='Z'))
            count2++;
        x++;
    }
    printf("\nThe total number of vowel in the string is: %d",count1);
    printf("\nThe total number of consonant in the string is: %d\n",count2);
}
