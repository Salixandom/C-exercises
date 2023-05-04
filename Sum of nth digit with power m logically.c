#include <stdio.h>
int main()
{
    long int n,i,m,x,sum=0,p;
    printf("Enter your n : ");
    scanf("%d",&n);
    printf("Enter your power : ");
    scanf("%d",&m);
    if(n>=0 && m>=0)
    {
        for(i=1 ; i<=n ; i++)
        {
            x=1,p=1;
            while(x<=m)
            {
                p*=i;
                x++;
            }
            sum+=p;
        }
        printf("\nYour result is : %d\n",sum);
    }
    else
        printf("\n\aPlease input a positive number\n");
}
