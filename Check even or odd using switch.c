#include <stdio.h>
int main()
{
    int a,res;
    printf("Enter your integer : ");
    scanf("%d",&a);

    res = a%2;

    switch (res)
    {
    case 0:
        printf("\n\tEven number\n");
        break;
    case 1:
        printf("\n\tOdd number\n");
        break;
    default :
        printf("\n\tFuck you\a\n");
        break;
    }
    getch();
}
