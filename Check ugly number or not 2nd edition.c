#include <stdio.h>
int main()
{
    int n,m,x=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    m=n;
    if(n<=0)
        printf("\nInput correct number(>0)\n");
    else if(n==1)
        printf("\n%d is an Ugly number.\n",n);
    else
    {
        while(n!=1)
        {
            if(n%2==0)
                n/=2;
            else if(n%3==0)
                n/=3;
            else if(n%5==0)
                n/=5;
            else
            {
                printf("\n%d is not an Ugly number\n",m);
                x=1;
                break;
            }
        }
        if(x==0)
            printf("\n%d is an Ugly number\n",m);
    }
}
