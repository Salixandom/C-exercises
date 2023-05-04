#include <stdio.h>
int main()
{
    int n,x,res=0;
    printf("Enter your n : ");
    scanf("%d",&n);
    for(x=1.5 ; x<n ; x++)
    {
        res+=x;
    }
    printf("\nEnter your result : %d\n",res);
}
