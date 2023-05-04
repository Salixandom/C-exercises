#include <stdio.h>
int main()
{
    int num,sum=0,r1,r2;
    printf("Enter your number : ");
    scanf("%d",&num);
    while(r1!=0)
    {
        r1=num/10;
        r2=num%10;
        sum+=r2;
        num=r1;
    }
    printf("\nYour result is : %d\n",sum);
}
