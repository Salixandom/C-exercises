#include <stdio.h>
int main()
{
    int num,r1,r2,temp=0;
    printf("Enter your number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        r1=num/10;
        r2=num%10;
        num=r1;
        temp=temp*10+r2;
    }
    while(temp!=0)
    {
        r1=temp/10;
        r2=temp%10;
        temp=r1;
        switch(r2)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
    }
}
