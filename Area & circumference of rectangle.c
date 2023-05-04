#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter the value of length and width : ");
    scanf("%f %f",&a,&b);
    printf("\n\tArea : %f\n",a*b);
    printf("\n\tCircumference : %f\n",2*(a+b));
    getch();
}
