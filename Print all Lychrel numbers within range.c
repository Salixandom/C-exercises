#include <stdio.h>  //jhamela ace

int rev_12(int x)
{
    long long int r1,r2,res=0;
    while(x!=0)
    {
        r1=x/10;
        r2=x%10;
        x=r1;
        res=res*10+r2;
    }
    return res;
}

int main()
{
    long long int m,n,temp,x,count=0,a,b;
    printf("Enter your starting value: ");
    scanf("%d",&m);
    printf("Enter your ending value: ");
    scanf("%d",&n);
    printf("------------------------------------------------------\n");
    printf("Lychrel numbers between %d and %d are: \n\n",m,n);
    for(x=m ; x<=n ; x++)
    {
        b=x;
        for(a=1 ; a<=30 ; a++)
        {
            temp=b+rev_12(b);
            if(temp==rev_12(temp))
                {
                    count++;
                    break;
                }
            b=temp;
        }
        if(count==0)
            printf("%d ",x);
        count=0;
    }
    printf("\n\nNumber of Lychrel numbers within the specific range: %d\n",count);
}
