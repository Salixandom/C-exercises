#include <stdio.h>

int fact_12(int n)
{
    if(n>1)
        return n*fact_12(n-1);
    else
        return 1;
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("\n%d!: %d\n",n,fact_12(n));
}
