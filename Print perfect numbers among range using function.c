#include <stdio.h>

int perfect_num(int x)
{
    int a,i=0;
    for(a=1 ; a<x ; a++)
    {
        if(x%a==0)
            i+=a;
    }
    return i;
}

int main()
{
    int m,n,x;
    printf("Enter your starting value: ");
    scanf("%d",&m);
    printf("Enter your ending value: ");
    scanf("%d",&n);
    printf("\nYour perfect numbers are: \n");
    for(x=m ; x<=n ; x++)
    {
        if(x==perfect_num(x))
            printf("%d ",x);
    }
    getch();
}
