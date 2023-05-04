#include <stdio.h>
int main()
{
    float a;
    printf("Enter your value in farenheit : ");
    scanf("%f",&a);
    printf("\nYour value in Celcius is : %f\n",(a-32)*5/9);
    getch();
}
