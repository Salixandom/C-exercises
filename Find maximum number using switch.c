#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter your two numbers : ");
    scanf("%f %f",&a,&b);

    switch (a>b)
    {
    case 1:
        printf("\n\t%f is the maximum number\n",a);
        break;
    case 0:
        printf("\n\t%f is the maximum number\n",b);
        break;
    }
    getch();
}
