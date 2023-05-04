#include <stdio.h>

///using left shift 
int main()
{
    int n,r;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter n'th number: ");
    scanf("%d",&r);
    if((n>>r)&1)
        printf("The bit is set");
    else
        printf("The bit is not set");
}

///using right shift
/*
int main()
{
    int n,r;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter n'th bit: ");
    scanf("%d",&r);
    if((1<<r)&n)
        printf("The bit is set");
    else
        printf("The bit is not set");
}
*/