#include <stdio.h>
int main()
{
    char st[100];
    int count1,count2,count3,x;
    count1=count2=count3=x=0;
    printf("Enter your text: ");
    gets(st);
    while(st[x]!=0)
    {
        if(st[x]>=48 && st[x]<=57)
            count1++;
        else if((st[x]>=65 && st[x]<=90) || (st[x]>=97 && st[x]<=122))
            count2++;
        else
            count3++;
        x++;
    }
    printf("\nNumber of Alphabets in the string is : %d",count2);
    printf("\nNumber of Digits in the string is : %d",count1);
    printf("\nNumber of Special characters in the string is : %d\n",count3+1);
}
