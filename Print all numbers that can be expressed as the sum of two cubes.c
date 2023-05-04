#include <stdio.h>   //execution time onkkk beshi//edit: Ella execution time moderate

int main()
{
    int n,x,y,i;
    printf("Enter your range: ");
    scanf("%d",&n);
    for(x=1 ; x<n ; x++)
    {
        for(y=1 ; y<x ; y++)
        {
            for(i=x ; i>y ; i--)
            {
                if((y*y*y+i*i*i)==x)
                    printf("%d = %d^3 + %d^3\n",x,y,i);
            }
        }
    }
}
