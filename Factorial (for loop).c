#include <stdio.h>
int main()
{
    int a,i,fact;
    printf("Enter your number : ");
    scanf("%d",&a);
    fact=1;
    for(i=1;i<=a;i++)
        fact*=i;
    printf("%d! = %d",a,fact);
}
