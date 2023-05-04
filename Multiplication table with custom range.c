#include <stdio.h>
int main()
{
    int num,n,i;
    printf("Enter your number : ");
    scanf("%d",&num);
    printf("Enter your range for multiplication table : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("\n%d X %d = %d",num,i,num*i);
    getch();
}
