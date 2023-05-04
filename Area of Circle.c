#include <stdio.h>
#include <math.h>
int main()
{
    float r;
    printf("Enter your radius : ");
    scanf("%f",&r);
    printf("\n\tArea : %f\n",M_PI*r*r);
    printf("\n\tCircumference : %f\n",2*M_PI*r);
    getch();
}
