#include <stdio.h>
int main()
{
    int x;
    printf("Enter your number of day of a week (1~7): "); //Considering day-1 as Saturday
    scanf("%d",&x);

    if (x==1)
        printf("\n\tSaturday\n");
    else if (x==2)
        printf("\n\tSunday\n");
    else if (x==3)
        printf("\n\tMonday\n");
    else if (x==4)
        printf("\n\tTuesday\n");
    else if (x==5)
        printf("\n\tWednesday\n");
    else if (x==6)
        printf("\n\tThursday\n");
    else if (x==7)
        printf("\n\tFriday\n");
    else
        printf("\n\tThere are seven days in a week you fool\n");

    getch();
}
