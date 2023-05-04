#include <stdio.h>
int main()
{
    char x;
    printf("Enter your alphabet : ");
    scanf("%c",&x);

    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\n\tYour input is a vowel\n");
        break;
    default:
        printf("\n\tYour input is an alphabet\n");
        break;
    }
    getch();
}
