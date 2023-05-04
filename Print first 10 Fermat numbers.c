#include <stdio.h>
int main()
{
    double x,a,b,res=1,y=1;
    printf("First 10 Fermat numbers are: \n");
    for(x=0 ; x<10 ; x++)
    {
        for(a=1 ; a<=x ; a++)
            res*=2;
        for(b=1 ; b<=res ; b++)
            y*=2;
        printf("%.0lf \n",y+1);
        res=y=1;
    }

}
