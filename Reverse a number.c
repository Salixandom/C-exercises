#include <stdio.h>
int main()
{
    int num,sum,r1,r2;
    printf("Enter your number : ");
    scanf("%d",&num);
    while(r1!=0)
    {
        r1=num/10;
        r2=num%10;
        num=r1;
        sum=(sum*10)+r2;
    }
    printf("\nYour result is : %d\n",sum);
}
