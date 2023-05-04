#include <stdio.h>
int main()
{
    int num,i=1;
    printf("Enter your number : ");
    scanf("%d",&num);
    printf("\n");
    while(i<=10)
    {
        printf("%d X %d = %d\n",num,i,num*i);
        i++;
    }
    getch();
}
