#include <stdio.h>
int main()
{
    int h,w;
    printf("Enter your height and width: ");
    scanf("%d %d",&h,&w);
    int n=w/2,x,y;
    for(x=0 ; x<h ; x++)
    {
        for(y=0 ; y<=n ; y++)
        {
            if(y==n || y==(w-n) || (x==h/2 && y>n && y<(w-n)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        n--;
    }
}
