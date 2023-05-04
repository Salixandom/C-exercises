#include <stdio.h>
int n;

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
    int x,i,count=0;
    printf("Enter how many elements you want to input: ");
    scanf("%d",&n);
    printf("-------------------------------------------------------------\n");
    printf("Enter your values: \n\n");
    int num[n];
    for(x=0 ; x<n ; x++)
    {
        printf("Value %d: ",x+1);
        scanf("%d",&num[x]);
    }
    for(x=0 ; x<n ; x++)
    {
        for(i=n-1 ; i>x ; i--)
            if(num[x]==temp_12(num[i]) && num[i]==temp_12(num[x]))
                count++;
    }
    printf("\nNumber of Amicable pairs presents in the array: %d\n",count);
}

