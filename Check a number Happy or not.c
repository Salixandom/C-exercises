#include <stdio.h>

int temp_12(int n)
{
    long int r1,r2,res=0;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        res+=(r2*r2);
    }
    return res;
}

int main()
{
    int n,m,x=1;
    printf("Enter your number: ");
    scanf("%d",&n);
    m=n;
    while(x<=25)
    {
        if(temp_12(m)==1)
        {
            printf("\n%d is a Happy number.\n",n);
            break;
        }
        m=temp_12(m);
        x++;
    }
    if(x>20)
        printf("\n%d is not a Happy number.\n",n);
}
