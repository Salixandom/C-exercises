#include <stdio.h>
int main()
{
    int n,x,res=0;
    printf("Enter your n : ");
    scanf("%d",&n);
    for(x=1 ; x<=n ; x++)
    {
        res+=x*(x+1);
    }
    printf("\nYour result is : %d\n",res);
}
