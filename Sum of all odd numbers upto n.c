#include <stdio.h>
int main()
{
    int n,x,res=0;
    printf("Enter your range : ");
    scanf("%d",&n);
    for(x=1 ; x<=n ; x+=2)
        res+=x;
    printf("\nYour sum is : %d\n",res);
}

