#include <stdio.h>
#include <math.h>
int main()
{
    char x;
    printf("Enter your operator (+ - * / %% ^ r): ");
    scanf("%c",&x);

    switch (x)
    {

    case '+':
        {
            float a,b;
            printf("\n\tEnter your two numbers : ");
            scanf("%f %f",&a,&b);
            printf("\t%f + %f = %f\n",a,b,a+b);
            break;
        }
    case '-':
        {
            float a,b;
            printf("\n\tEnter your two numbers : ");
            scanf("%f %f",&a,&b);
            printf("\t%f - %f = %f\n",a,b,a-b);
            break;
        }
    case '*':
        {
            float a,b;
            printf("\n\tEnter your two numbers : ");
            scanf("%f %f",&a,&b);
            printf("\t%f * %f = %f\n",a,b,a*b);
            break;
        }
    case '/':
        {
            float a,b;
            printf("\n\tEnter your two numbers : ");
            scanf("%f %f",&a,&b);
            printf("\t%f / %f = %f\n",a,b,a/b);
            break;
        }
    case '%':
        {
            float a,b;
            printf("\n\tEnter your two numbers : ");
            scanf("%f %f",&a,&b);
            printf("\t%f %% %f = %f\n",a,b,fmod(a,b));
            break;
        }
    case '^':
        {
            float a,b;
            printf("\n\tEnter your base : ");
            scanf("%f",&a);
            printf("\n\tEnter your power : ");
            scanf("%f",&b);
            printf("\t%f^%f = %f\n",a,b,pow(a,b));
            break;
        }
    case 'r':
        {
            float a;
            printf("\n\tEnter your number : ");
            scanf("%f",&a);
            printf("\tSquare root of a = %.15f\n",sqrt(a));
            break;
        }
    default:
        printf("\n\tEnter correct operator\n");
        break;
    }
    getch();
}
