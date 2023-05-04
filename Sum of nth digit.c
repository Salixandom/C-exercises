#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter your n : ");
    scanf("%d",&n);
    printf("\n");
    if (n>=0)
    {
        for(i=0 ; i<=n; i++)
        {
            sum+=i;
        }
        printf("Your result is : %d\n",sum);
    }
    else
        printf("\aPlease input a positive number\n");
}
