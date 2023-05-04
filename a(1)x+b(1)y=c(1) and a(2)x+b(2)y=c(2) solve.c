#include <stdio.h>
int main()
{
    float a1,a2,b1,b2,c1,c2,x,y,temp;
    printf("Enter your a,b,c of 1st equation (ax+by=c): ");
    scanf("%f %f %f",&a1,&b1,&c1);
    printf("Enter your a,b,c of 2nd equation (ax+by=c): ");
    scanf("%f %f %f",&a2,&b2,&c2);

    temp= (a1*b2 - a2*b1);

    if (temp==0)
        printf("\n\aThere is no solution in your given equation\n");
    else
    {
        x=(b2*c1 - b1*c2)/temp;
        y=(a1*c2 - a2*c1)/temp;

        printf("\nYour result is :\n\n\tx : %.2f\n\ty : %.2f\n",x,y);
    }
}
