#include <stdio.h>

int max_12(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int HCF_12(int a,int b,int x)
{
    if(a%x==0&&b%x==0)
        return x;
    else
    {
        return HCF_12(a,b,x-1);
    }
}

int main()
{
    int a,b,x;
    printf("Enter your two number: ");
    scanf("%d %d",&a,&b);
    x=max_12(a,b);
    printf("\nHCF: %d\n",HCF_12(a,b,x));
}
