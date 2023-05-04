#include <stdio.h>
int main()
{
    int n,x=1,r1=0,r2=1,res;
    printf("Enter your nth term: ");
    scanf("%d",&n);
    printf("--------------------------------------------------------------------\n");
    printf("Pell numbers upto %th term are: \n\n",n);
    while(x!=n)
    {
        if(x<=2)
        {
            printf("%d ",x-1);
            x++;
        }
        else
        {
            res=r2*2+r1;
            r1=r2;
            r2=res;
            printf("%d ",res);
            x++;
        }
    }
    printf("\n");
}
