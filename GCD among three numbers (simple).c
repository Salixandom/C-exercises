#include <stdio.h>
int main()
{
    int a,b,c,i,max;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
        max=a;
    else if (b>a && b>c)
        max=b;
    else
        max=c;
    for(i=max ; i>=1 ; i--)
    {
        if(a%i==0&&b%i==0&&c%i==0)
        {
            printf("\nGCD = %d\n",i);
            break;
        }
    }
}
