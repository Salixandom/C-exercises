#include <stdio.h>
int main()
{
    int num,sum=0,r1,r2,temp;
    printf("Enter your number : ");
    scanf("%d",&num);
    temp=num;
    while(r1!=0)
    {
        r1=num/10;
        r2=num%10;
        sum=(sum*10)+r2;
        num=r1;
    }
    if(temp==sum)
        printf("\n\t%d is a palindrome number\n",temp);
    else
        printf("\n\t%d is not a palindrome number\n",temp);
}
