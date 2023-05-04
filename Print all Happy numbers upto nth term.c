#include <stdio.h>

int temp_12(int n)
{
    long int r1,r2,res=0;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        res+=(r2*r2);
    }
    return res;
}

int main()
{
    int n,m,x=1,i;
    printf("Enter your nth term: ");
    scanf("%d",&n);
    printf("------------------------------------------------------------\n");
    printf("Happy numbers upto %dth term are: \n\n",n);
    for(i=1 ; i<=n ; i++)
    {
        m=i;
        while(x<=25)
        {
            if(temp_12(m)==1)
            {
                printf("%d ",i);
                break;
            }
            m=temp_12(m);
            x++;
        }
        x=0;
    }
    printf("\n");
}

