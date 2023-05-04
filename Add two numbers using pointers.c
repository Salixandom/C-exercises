#include <stdio.h>
int main()
{
    int a,b,*A,*B;
    printf("Input the first number: ");
    scanf("%d",&a);
    printf("Input the second number: ");
    scanf("%d",&b);
    A=&a;
    B=&b;
    printf("\nThe sum of two numbers: %d\n",*A+*B);
}
