#include <stdio.h>
int main()
{
    int num,r1,r2,res1=1,res2=0,i,temp;
    printf("Enter your number : ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        r1=num/10;
        r2=num%10;
        num=r1;
        for(i=1 ; i<=r2 ; i++)
        {
            res1*=i;
        }
        res2+=res1;
        res1=1;
    }
    if(temp==res2)
        printf("\n%d is a Strong Number\n",temp);
    else
        printf("\n%d is not a Strong Number\n",temp);
}
