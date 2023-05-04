#include <stdio.h>

int nCr_12(int n, int r)
{
    int p,q,m,a,b,c,val;
    a=b=c=1;
    for(p=n ; p>=1 ; p--)
        a*=p;
    for(q=n-r ; q>=1 ; q--)
        b*=q;
    for(m=r ; m>=1 ; m--)
        c*=m;
    val=a/(b*c);
    return val;
}

int main()
{
    int s,x,i,y,count=0;
    printf("Enter your row number: ");
    scanf("%d",&s);
    printf("\n");
    for(x=1 ; x<=s ; x++)
    {
        for(i=s-x ; i>=1 ; i--)
            printf("  ");
        for(y=1 ; y<=x*2-1 ; y++)
        {
            if(y%2==0)
                printf("  ");
            else
            {
                printf("%d ",nCr_12(x-1,count));
                count++;
            }
        }
        count=0;
        printf("\n");
    }
}
