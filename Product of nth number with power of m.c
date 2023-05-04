#include <stdio.h>
int main()
{
    int n,m,x,i,temp1=1,res=1;
    printf("Enter your n : ");
    scanf("%d",&n);
    printf("Enter your power : ");
    scanf("%d",&m);
    for(i=1 ; i<=n ; i++)
    {
        for(x=1 ; x<=m ; x++)
        {
            temp1*=i;
        }
        res*=temp1;
        temp1=1;
    }
    printf("\nYour result is : %d\n",res);
}
