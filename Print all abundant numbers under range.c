#include <stdio.h>
int main()
{
    int n,x,a,res=0;
    printf("Enter your range: ");
    scanf("%d",&n);
    printf("-------------------------------------------\n");
    printf("Abundant numbers between 1 and %d are: \n\n",n);
    for(a=1 ; a<=n ; a++)
    {
        for(x=1 ; x<a ; x++)
        {
            if(a%x==0)
                res+=x;
        }
        if(res>a)
            printf("%d ",a);
        res=0;
    }
    printf("\n");
}
