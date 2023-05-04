#include <stdio.h>
int main()
{
    float a;
    printf("Enter your value in feet : ");
    scanf("%f",&a);
    printf("\nYour value in meter is : %f\n",(a*12*2.54*.01));
    getch();
}
