#include <stdio.h>
int main()
{
    long long int n,x,n1=0,n2=1,res,count=0;
    printf("Enter your digit number : ");
    scanf("%d",&n);
    printf("\nYour Fibonacci series upto %d digit is : \n\n",n);
    for(x=1 ; x<=n ; x++)
    {
        if(count<=1)
            res=count;
        else
        {
            res=n1+n2;
            n1=n2;
            n2=res;
        }
        count++;
        printf("%d ",res);
    }
    printf("\n");
}
