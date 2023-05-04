#include <stdio.h>
int main()
{
    char x;
    printf("Enter your uppercase character : ");
    scanf("%c",&x);
    printf("\nYour lowercase character is : %c\n",tolower(x));
}
