#include <stdio.h>
int main()
{
    int n,x,res=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(x=1 ; x<n ; x++)
    {
        if(n%x==0)
            res+=x;
    }
    if(res>n)
        printf("\n%d is an Abundant number\n",n);
    else
        printf("\n%d is not an Abundant number\n",n);
}
