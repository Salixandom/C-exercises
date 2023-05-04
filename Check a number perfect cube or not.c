#include <stdio.h>
#include <math.h>
int main()
{
    int n,x;
    printf("Enter your number: ");
    scanf("%d",&n);
    x=round(pow(n, 1.0/3.0));
    if(x*x*x==n)
        printf("\n%d is a perfect cube\n",n);
    else
        printf("\n%d is not a perfect cube\n",n);
}
