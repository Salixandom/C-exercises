#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter your value of dividend and divisor : ");
    scanf("%f %f",&a,&b);
    printf("\nYour remainder is : %.0f\n",fmod(a,b));
    getch();
}
