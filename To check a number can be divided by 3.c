#include <stdio.h>   //boi er niyome korar try korci -_-
int main()
{
    int num,sum=0,r1,r2,res;
    printf("Enter your number : ");
    scanf("%d",&num);
    while(r1!=0)
    {
        r1=num/10;
        r2=num%10;
        sum+=r2;
        num=r1;
    }
    res=sum%3;
    if(res==0)
        printf("\nThe number can be divided by 3\n");
    else
        printf("\nThe number can not be divided by 3\n");
}
