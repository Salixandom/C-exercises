#include <stdio.h>
int main()
{
    int n,m,r1,r2;
    printf("Enter your number: ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        if(r2==0)
        {
            printf("\n%d is a Duck number\n",m);
            break;
        }
    }
    if(n==0)
        printf("\n%d is not a Duck number\n",m);
}
