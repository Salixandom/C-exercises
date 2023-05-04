#include <stdio.h>
#include <math.h>
int main()
{
    int n,x=1,y,a,count=0;
    printf("Enter your range: ");
    scanf("%d",&n);
    printf("-------------------------------------------------\n");
    printf("Mersenne Prime numbers upto %dth term are: \n\n",n);
    while(a<=n)
    {
        a=pow(2,x)-1;
        for(y=2 ; y<a ; y++)
        {
            if(a%y==0)
                count++;
        }
        if(count==0)
            printf("%d ",a);
        count=0;
        x++;
    }
    printf("\n");
}
