#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter your three numbers : ");
    scanf("%f %f %f",&a,&b,&c);

    switch (a>b)
    {
    case 1:
        switch (a>c)
        {
        case 1:
            printf("\n\t%f is the maximum number\n",a);
            break;
        case 0:
            printf("\n\t%f is the maximum number\n",c);
            break;
        }
        break;
    case 0:
        switch (b>c)
        {
        case 1:
            printf("\n\t%f is the maximum number\n",b);
            break;
        case 0:
            printf("\n\t%f is the maximum number\n",c);
            break;
        }
        break;

    }
    getch();
}
