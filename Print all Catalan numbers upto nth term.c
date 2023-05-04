#include <stdio.h>

int cat_term(int n)
{
    long long int x,res1=1,res2=1,res3=1;
    for(x=1 ; x<=2*n ; x++)
        res1*=x;
    for(x=1 ; x<=(n+1) ; x++)
        res2*=x;
    for(x=1 ; x<=n ; x++)
        res3*=x;
    return res1/(res2*res3);
}

int main()
{
    int n,x;
    printf("Enter your nth term: ");
    scanf("%d",&n);
    printf("-------------------------------------------------------\n");
    printf("Catalan numbers upto %dth term are: \n\n",n);
    if(n==1)
        printf("1");
    else if(n>1)
    {
        for(x=1 ; x<=n ; x++)
        {
            if(x-1==0)
                printf("1 ");
            else
                printf("%d ",cat_term(x-1));
        }
    }
    printf("\n");
}
