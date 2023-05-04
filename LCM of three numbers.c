#include <stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    for(i=1 ; i<=a*b*c ; i++)
    {
        if(i%a==0 && i%b==0 && i%c==0)
            {
                printf("\nLCM = %d\n",i);
                break;
            }
    }
}
