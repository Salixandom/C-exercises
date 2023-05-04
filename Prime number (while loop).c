#include <stdio.h>
int main()
{
    int num,i=2,count=0;
    printf("Enter your number : ");
    scanf("%d",&num);
    if(num>0)
    {
        while(i<num)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
            i++;
        }
        if(count==0)
            printf("\n%d is a prime number\n",num);
        else
            printf("\n%d is not a prime number\n",num);
    }
    else
        printf("\nPlease input a positive number\n");
}
