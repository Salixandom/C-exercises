#include <stdio.h>
int main()
{
    int a,b,c,rem;
    printf("Enter your dividend : ");
    scanf("%d",&a);
    printf("Enter your divisor : ");
    scanf("%d",&b);
    c=a/b;
    rem=a-(b*c);
    printf("\nYour reminder is : %d\n",rem);
}
