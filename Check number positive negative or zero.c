#include <stdio.h>
int main()
{
    int a,result;
    printf("Enter your integer : ");
    scanf("%d",&a);

    result = a!=0 ? (a>0 ? printf("\n\tYour input is Positive\n") : printf("\n\tYour input is Negative\n")) : \
        printf("\n\tYour input is Zero\n");

    getch();
}
