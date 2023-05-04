#include <stdio.h>
int main()
{
    int num,r1,r2,res=1;
    printf("Enter your number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        r1=num/10;
        r2=num%10;
        num=r1;
        res*=r2;
    }
    printf("\nYour product is : %d\n",res);
}
