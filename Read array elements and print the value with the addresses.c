#include <stdio.h>
int main()
{
    int a[10]={5,10,15,20,25,30,35,40,45,50},x;
    printf(" Value            Adress\n");
    printf("-------          --------\n");
    for(x=0 ; x<10 ; x++)
    {
        printf("%4d              %x\n",a[x],(a+x));
    }
}
