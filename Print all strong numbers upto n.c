#include <stdio.h>
int main()
{
    long int n,i,x,temp,r1,r2,res2=0,res1=1;
    printf("Enter your n : ");
    scanf("%d",&n);
    printf("\nStrong Numbers upto %d are : \n",n);
    for(i=1 ; i<=n ; i++)
    {
        temp=i;
        while(temp!=0)
        {
            r1=temp/10;
            r2=temp%10;
            temp=r1;
            for(x=1 ; x<=r2 ; x++)
            {
                res1*=x;
            }
            res2+=res1;
            res1=1;
        }
        if(res2==i)
            printf("%d ",i);
        res2=0;
    }
    printf("\n");
}
