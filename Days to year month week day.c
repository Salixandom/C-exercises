#include <stdio.h>
int main()
{
    int day,year,month,week;
    printf("Enter your number of days : ");
    scanf("%d",&day);

    year = day/365;
    month = (day%365)/30;
    week = ((day%365)%30)/7;
    day = (((day%365)%30)%7);

    printf("\n\tYear : %d\n",year);
    printf("\n\tMonth : %d\n",month);
    printf("\n\tWeek : %d\n",week);
    printf("\n\tDay : %d\n",day);

    getch();
}
