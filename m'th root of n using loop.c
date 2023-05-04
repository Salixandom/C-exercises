#include <stdio.h>
int main()
{
    float n,r=1,x;
    int i,m;
    printf("Enter your number : ");
    scanf("%f",&n);
    printf("Enter your root power : ");
    scanf("%d",&m);
    for(x=.00001 ; x<=n ; x+=.00001)
    {
        for(i=1 ; i<=m ; i++)
        {
            r*=x;
        }
        if(n-r<.0001)
        {
            printf("\nYour root is : %.2f\n",x);
            break;
        }
        r=1;
    }
}
