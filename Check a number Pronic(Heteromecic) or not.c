#include <stdio.h>
int main()
{
    int n,x;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(x=1 ; x<n ; x++)
    {
        if(x*(x+1)==n)
        {
            printf("\n%d is a Pronic number.\n",n);
            break;
        }
    }
    if(x==n)
        printf("\n%d is not a Pronic number.\n",n);
}
