#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your alphabet : ");
    scanf("%c",&ch);

    if (ch>=65 && ch<=90)
        printf("\n\tYour alphabet is an upperclass character\n");
    else if (ch>=97 && ch<=122)
        printf("\n\tYour alphabet is an lowerclass character\n");
    else
        printf("\n\tYour input is not an alphabet\n");

    getch();
}
