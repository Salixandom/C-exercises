#include <stdio.h>
int main()
{
    int x;
    printf("Enter your day number (Considering 1 as Saturday): ");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        printf("\n\tSaturday\n");
        break;
    case 2:
        printf("\n\tSunday\n");
        break;
    case 3:
        printf("\n\tMonday\n");
        break;
    case 4:
        printf("\n\tTuesday\n");
        break;
    case 5:
        printf("\n\tWednesday\n");
        break;
    case 6:
        printf("\n\tThursday\n");
        break;
    case 7:
        printf("\n\tFriday\n");
        break;
    default:
        printf("\n\tThere are 7 days in a week you fool\n");
    }
    getch();
}
