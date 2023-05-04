#include <stdio.h>
int main()
{
    int n,i;
    float m,sum=0;
    printf("Enter your n : ");
    scanf("%d",&n);
    printf("Enter your power : ");
    scanf("%f",&m);
    if(n>=0)
    {
        for(i=0 ; i<=n ; i++)
            sum+= pow(i,m);
        printf("\nYour result is : %f\n",sum);
    }
    else
        printf("\n\aPlease input a positive number\n");
}
