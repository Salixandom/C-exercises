#include <stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter your number : ");
    scanf("%d",&num);
    if (num>0)
    {
        for(i=2 ; i<num ; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("\n%d is a prime number\n",num);
        else
            printf("\n%d is not a prime number\n",num);

    }
    else
        printf("\n\aPlease input a positive number.\n");
}
