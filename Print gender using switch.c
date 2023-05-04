#include <stdio.h>
int main()
{
    char x;
    printf("Enter your gender (M/F): ");
    scanf("%c",&x);

    switch (x)
    {
    case 'M':
    case 'm':
        printf("\n\tGender : Male\n");
        break;
    case 'F':
    case 'f':
        printf("\n\tGender : Female\n");
        break;
    default:
        printf("\n\tPlease input correct keyword");
        break;
    }
    getch();
}
