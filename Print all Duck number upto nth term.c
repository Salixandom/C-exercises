#include <stdio.h>
int main()
{
    int n,m,r1,r2,x;
    printf("Enter your nth term: ");
    scanf("%d",&n);
    printf("--------------------------------------------------\n");
    printf("Duck numbers upto %dth term are: \n\n",n);
    for(x=1 ; x<=n ; x++)
    {
        m=x;
        while(m!=0)
        {
            r1=m/10;
            r2=m%10;
            m=r1;
            if(r2==0)
            {
                printf("%d ",x);
                break;
            }
        }
    }
    printf("\n");
}
