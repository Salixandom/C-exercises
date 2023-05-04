#include<stdio.h>//checking whether a prime or not
int main()
{
    int x,n;

    printf(" insert a number:");

    scanf("%d",&n);
    if(n==0||n==1||n<0)
    {
        printf("the number is not prime");
    }
    else if(n==2)
    {
        printf("the number is prime");
    }
    else
    {
        for(x=2; x<n; x++)
        {


            if(n%x==0)
            {
                printf(" %d is not prime number",n);
                break;
            }
            if(x==n-1)
            {
                printf("%d is a prime",n);
            }





        }

    }

}
