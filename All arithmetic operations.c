#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter your two numbers(a>b) : ");
    scanf("%f %f",&a,&b);
    printf("\n\tSum = %f",a+b);
    printf("\n\tProduct = %f",a*b);
    printf("\n\tSubtraction = %f",a-b);
    printf("\n\tQuotient = %f",a/b);
    printf("\n\tRemainder = %f",fmod(a,b));
    getch();
}
