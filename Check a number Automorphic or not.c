#include <stdio.h>
#include <math.h>

int temp_12(long long int n)
{
    long long int r1,count=0;
    while(n!=0)
    {
        r1=n/10;
        n=r1;
        count++;
    }
    return count;
}

int main()
{
    long long int n,temp;
    printf("Enter your number: ");
    scanf("%d",&n);
    temp=fmod((n*n),pow(10,temp_12(n)));
    if(n==temp)
        printf("\n%d is an Automorphic number\n",n);
    else
        printf("\n%d is not an Automorphic number\n",n);
}
