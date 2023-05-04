#include <stdio.h>
int n;
int main()
{
    printf("Enter how many terms you want to print: ");
    scanf("%d",&n);
    printf("------------------------------------------------------\n");
    printf("Fibonacci numbers upto %dth term are: \n\n",n);
    long long int fibo[n],x=0;
    fibo[0]=0;
    fibo[1]=1;
    while(x<n-2)
    {
        fibo[x+2]=fibo[x+1]+fibo[x];
        x++;
    }
    for(x=0 ; x<n ; x++)
        printf("%lld ",fibo[x]);
    printf("\n");
}
