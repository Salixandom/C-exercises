#include <stdio.h>
int main()
{
    int n;
    float x,res=0;
    printf("Enter your n : ");
    scanf("%d",&n);
    for(x=1 ; x<=n ; x++)
    {
        res+=(1/x);
    }
    printf("\nYour result is : %f\n",res);
}
