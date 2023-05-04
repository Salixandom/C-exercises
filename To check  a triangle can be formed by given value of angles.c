#include <stdio.h>
int main()
{
    float a,b,c,sum;
    printf("Enter your angles with space : ");
    scanf("%f %f %f",&a,&b,&c);

    sum = a+b+c;

    if (a==0 || b==0 || c==0)
        printf("\nTriangle can not be formed by your given info.\n");
    else
    {
        if (sum==180)
            printf("\nYour given info an form a triangle.\n");
        else
            printf("\nTriangle can not be formed by your given info.\n");
    }
    getch();
}
