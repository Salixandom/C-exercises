#include <stdio.h>
int main()
{
    int *n,x,i,res=1;
    printf("Enter your number: ");
    scanf("%d",&x);
    n=&x;
    for(i=*n ; i>=1 ; i--)
        res*=i;
    printf("\nFactorial: %d\n",res);
}
