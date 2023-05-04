#include <stdio.h>

int LCM_12(int a,int b)
{
    static int x=1;
    if(x%a==0 && x%b==0)
    {
        return x;
    }
    else
    {
        x++;
        return LCM_12(a,b);
    }
}

int main()
{
    int a,b;
    printf("Enter your two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nLCM: %d\n",LCM_12(a,b));
}
