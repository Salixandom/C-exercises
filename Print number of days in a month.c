#include <stdio.h>
int main()
{
    int mn;
    printf("Enter your month number (letting 1 as january and so on) : ");
    scanf("%d",&mn);

    if (mn==1 || mn==3 || mn==5 || mn==7 || mn==8 || mn==10 || mn==12)
        printf("\n\tThere are 31 days in your desired month.\n");
    else if (mn==4 || mn==6 || mn==9 || mn==11)
        printf("\n\tThere are 30 days in your desired month.\n");
    else if (mn==2)
        printf("\n\tThere are 28 days in your month if it's not a leap year and 29 days in-case it's a leap year'\n");
    else
        printf("\n\tThere are 12 months in a year you fool.\n");

    getch();
}
