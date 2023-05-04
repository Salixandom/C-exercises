#include <stdio.h>
int main()
{
    float a,r,n,total,x=1;
    int i;
    printf("Enter your loan amount, interest rate(%%) & year : ");
    scanf("%f %f %f",&a,&r,&n);
    if(n<=1)
    {
        total=a*(1+(r*n)/100);
        printf("\nYour total due is : %.3f\n",total);
    }
    else
    {
        for(i=1 ; i<=n ; i++)
        {
            x*=(1+r/100);
        }
        total=a*x;
        printf("\nYour total due is : %.3f\n",total);
    }
}
