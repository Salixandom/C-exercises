#include <stdio.h>
int main()
{
    int num,r1,r2,count,temp1,temp2,res1,res2,x;
    printf("Enter your number : ");
    scanf("%d",&num);
    temp1=temp2=num;
    while(num!=0)
    {
        r1=num/10;
        r2=num%10;
        num=r1;
        count++;
    }
    r1=r2=res2=0;
    res1=1;
    while(temp1!=0)
    {
        r1=temp1/10;
        r2=temp1%10;
        temp1=r1;
        for(x=1 ; x<=count ; x++)
        {
            res1*=r2;
        }
        res2+=res1;
        res1=1;
    }
    r1=r2=0;
    if(res2==temp2)
        printf("\n%d is an Armstrong Number\n",temp2);
    else
        printf("\n\a%d is not a Armstrong Number\n",temp2);
}
