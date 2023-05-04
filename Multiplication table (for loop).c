#include <stdio.h>
int main()
{
    int i,num;
    printf("Enter your number : ");
    scanf("%d",&num);
    printf("\n");
    for(i=1 ; i<=10 ; i++)
        printf("%d X %d = %d\n",num,i,num*i);
    getch();
}
