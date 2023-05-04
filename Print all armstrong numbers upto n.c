#include <stdio.h>
int main()
{
    int n,i,x,temp1,temp2,res1,res2,r1,r2,count=0;
    printf("Enter your n : ");
    scanf("%d",&n);
    printf("\nArmstrong numbers upto %d are : \n",n);
    for(i=1 ; i<=n ; i++)
    {
        temp1=temp2=i;
        while(temp1!=0)
        {
            r1=temp1/10;
            r2=temp1%10;
            temp1=r1;
            count++;
        }
        r1=r2=res2=0;
        res1=1;
        while(temp2!=0)
        {
            r1=temp2/10;
            r2=temp2%10;
            temp2=r1;
            for(x=1 ; x<=count ; x++)
            {
                res1*=r2;
            }
            res2+=res1;
            res1=1;
        }
        if(res2==i)
            printf("%d ",i);
        count=0;
    }
    printf("\n");
}
