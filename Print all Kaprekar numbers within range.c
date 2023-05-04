#include <stdio.h>
#include <math.h>

int count_12(int n)
{
    int r1,r2,count=0;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        count++;
    }
    return count;
}

int main()
{
    int dig,temp1,temp2,r1,r2,res=0,n,x;
    printf("Enter your range: ");
    scanf("%d",&n);
    printf("----------------------------------------------------\n");
    printf("Kaprekar numbers between 1 and %d are: \n\n",n);
    for(x=1 ; x<=n ; x++)
    {
        dig=count_12(x);
        temp1=pow(x,2);
        temp2=pow(10,dig);
        while(temp1!=0)
        {
            r1=temp1/temp2;
            r2=temp1%temp2;
            temp1=r1;
            res+=r2;
        }
        if(res==x)
            printf("%d ",x);
        res=0;
    }
    printf("\n");
}
