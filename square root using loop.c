#include <stdio.h>
int main()
{
    float n,x,r;
    printf("Enter your number : ");
    scanf("%f",&n);
    for(x=.00001 ; x<=n ; x+=.00001)
    {
        r=x*x;
        if(n-r<0.001)
        {
            printf("\nYour square root is : %.2f\n",x);
            break;
        }
    }
}
