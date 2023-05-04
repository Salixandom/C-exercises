#include <stdio.h>

int max_val(int a,int b)
{
    return ((a>b) ? a : b);
}

int min_val(int a,int b)
{
    return ((a<b) ? a : b);
}

int getvalue(int a,int b,int (*pF)(int,int))
{
    return ((*pF)(a,b));
}

int main()
{
    int a,b;
    printf("Enter your two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nThe maximum value is: %d",getvalue(a,b,max_val));
    printf("\nThe minimum value is: %d\n",getvalue(a,b,min_val));
}
