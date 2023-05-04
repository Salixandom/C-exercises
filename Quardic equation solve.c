#include <stdio.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter a,b,c according to a(x^2)+bx+c=0 : ");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-4*a*c;
    if(d<0)
        printf("\nThere is no real solution to your equation.\n");
    else if(d>=0)
    {
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        printf("\n\tx1 = %.3f\n\tx2 = %.3f\n",x1,x2);
    }
}
