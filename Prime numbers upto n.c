#include <stdio.h>
int main()
{
    int n,count,i,x;
    printf("Enter your n : ");
    scanf("%d",&n);
    for(i=2 ; i<=n; i++)
    {
        for(x=2 ; x<i ; x++)
        {
            count=0;
            if(i%x==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("%d ",i);
    }
}
