#include <stdio.h>
int main()
{
    int a,b;
    int *A,*B;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);
    A=&a;
    B=&b;
    printf("\nThe maximum number is: %d\n",(*A > *B) ? *A : *B);
}
