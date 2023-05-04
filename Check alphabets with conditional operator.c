#include <stdio.h>
int main()
{
    char ch;
    int result;
    printf("Enter your character : ");
    scanf("%c",&ch);

    result = (ch>=65 && ch<=122) ? printf("\n\tYour input is an alphabet\n") :\
        printf("\n\tYour input is not an alphabet\n");

    getch();
}
