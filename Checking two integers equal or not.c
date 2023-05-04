#include <stdio.h>
int main()
{
    int a,b,result;
    printf("Enter your two integers with space : ");
    scanf("%d %d",&a,&b);

    result = (a==b) ? printf("\n\tYour given two integers are equal\n") : \
        printf("\n\tYour given two integers are different\n");

    getch();

}
