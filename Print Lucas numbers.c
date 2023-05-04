#include <stdio.h>
int main()
{
    int n,res,x,r1=2,r2=1;
    printf("Enter your nth term: ");
    scanf("%d",&n);
    printf("-------------------------------------------------\n");
    printf("Lucas number upto %dth term are: \n\n",n);
    if(n>1)
    {
        printf("%d %d ",r1,r2);
        for(x=3 ; x<=n ; x++)
        {
            res=r1+r2;
            r1=r2;
            r2=res;
            printf("%d ",res);
        }
    }
    else if(n==1)
        printf("%d ",r1);
    else
        printf("\nInput correct number.\n");
    printf("\n");
}
