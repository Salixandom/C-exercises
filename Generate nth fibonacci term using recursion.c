#include <stdio.h>

int fib_term(int n)
{
    static int count=0,n1=0,n2=1,res;
    if(count<=n)
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
        return fib_term(n);
    }
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter your term number: ");
    scanf("%d",&n);
    printf("\nYour fibonacci term:\n");
    fib_term(n);
    printf("\n");
}
