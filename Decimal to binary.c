#include <stdio.h>
int main()
{
    int num,r1,r2,res1=0,res2=0;
    printf("Enter your Decimal number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        r1=num/2;
        r2=num%2;
        num=r1;
        res1=(res1*10)+r2;
    }
    while(res1!=0)
    {
        r1=res1/10;
        r2=res1%10;
        res1=r1;
        res2=(res2*10)+r2;
    }
    printf("%d",res2);
}
