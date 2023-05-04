#include <stdio.h>
int main()
{
    int n,x,i;
    printf("Enter your nth term: ");
    scanf("%d",&n);
    printf("---------------------------------------\n");
    printf("Pronic number upto %dth term are: \n\n",n);
    for(i=1 ; i<=n ; i++)
    {
        for(x=1 ; x<i ; x++)
        {
            if(x*(x+1)==i)
            {
                printf("%d ",i);
                break;
            }
        }
    }
    printf("\n");
}

