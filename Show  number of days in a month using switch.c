#include <stdio.h>
int main()
{
    int x;
    printf("Enter number of month (Considering 1 as January): ");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\n\tThere are 31 days in your preferred month\n");
        break;

    case 2:
        printf("\n\tTher are 28 days in your preferred month if it's not a leap year.\
                And in-case of leap year there are 29 days.\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("\n\tThere are 30 days in your preferred month\n");
        break;

    default:
        printf("\n\tThere are 12 months you fool.\n");
        break;

    }

    getch();
}
