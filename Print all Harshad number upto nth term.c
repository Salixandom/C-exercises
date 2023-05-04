#include <stdio.h>

int temp_12(int n)
{
    int r1,r2,res=0;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        res+=r2;
    }
    return res;
}

int main()
{
    int n,x;
    printf("Enter your nth term: ");
    scanf("%d",&n);
    printf("----------------------------------------------\n");
    printf("Harshed numbers upto %dth term are: \n\n",n);
    for(x=1 ; x<=n ; x++)
    {
        if(x%temp_12(x)==0)
            printf("%d ",x);
    }
    printf("\n");
}

