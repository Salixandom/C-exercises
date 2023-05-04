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
    long long int n,temp,x;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("-----------------------------------------------------\n");
    printf("Automorphic numbers upto %dth term are: \n\n",n);
    for(x=1 ; x<=n ; x++)
    {
        temp=fmod((x*x),pow(10,temp_12(x)));
        if(x==temp)
            printf("%d ",x);
    }
    printf("\n");
}
