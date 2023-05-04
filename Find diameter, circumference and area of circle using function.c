#include <stdio.h>
#include <math.h>

double diameter(double r)
{
    return 2*r;
}

double circumference(double r)
{
    return 2*M_PI*r;
}

double area(double r)
{
    return M_PI*r*r;
}

int main()
{
    double r;
    printf("Enter your radius of circle: ");
    scanf("%lf",&r);
    printf("\n\tDiameter: %lf\n\tCircumference: %lf\n\tArea: %lf\n\t",diameter(r),circumference(r),area(r));
    getch();
}
