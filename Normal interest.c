#include <stdio.h>
int main()
{
    float a,r,total;
    int y;
    printf("Enter your loan amount, interest rate & number of years : ");
    scanf("%f %f %d",&a,&r,&y);

    total = a*(1+(r*y)/100);

    printf("\nYour total dew is : %.3f\n",total);
}
