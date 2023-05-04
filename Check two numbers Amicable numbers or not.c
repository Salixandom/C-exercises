#include <stdio.h>

int temp_12(int n)
{
    int x,res=0;
    for(x=1 ; x<n ; x++)
    {
        if(n%x==0)
            res+=x;
    }
    return res;
}

int main()
{
    int a,b;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);
    if(a==temp_12(b) && b==temp_12(a))
        printf("\n%d and %d are Amicable pairs\n",a,b);
    else
        printf("\n%d and %d are not Amicable pairs\n",a,b);
}
