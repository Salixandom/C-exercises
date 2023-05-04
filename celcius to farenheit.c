#include <stdio.h>
int main()
{
    float a;
    printf("Enter your value in Celcius : ");
    scanf("%f",&a);
    printf("\nYour value in farenheit is : %f\n",(a*9/5)+32);
    getch();
}
