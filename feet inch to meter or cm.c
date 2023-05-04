#include <stdio.h>
int main()
{
    int a;
    float b,inch,cm,m;
    printf ("Enter your height (feet inch) : ");
    scanf("%d %f",&a,&b);

    inch = (a*12)+b;

    printf("\nYour height in centimeter is : %f\n",inch*2.54);
    printf("\nYour height in meter is : %f\n",inch*2.54*.01);
    getch();

}
