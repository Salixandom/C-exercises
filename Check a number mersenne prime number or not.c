#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,a,count=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(x=2 ; x<n ; x++)
    {
        if(n%x==0)
            count++;
    }
    if(count==0)
    {
        for(a=0 ; a<=25 ; a++)
        {
            if((pow(2,a)-1==n))
            {
                printf("\n%d is a Mersenne Prime number\n",n);
                break;
            }
        }
        if(a>25)
            printf("\n%d is not a Mersenne Prime number\n",n);
    }
    else
        printf("\n%d is not a Mersenne Prime number\n",n);
}
