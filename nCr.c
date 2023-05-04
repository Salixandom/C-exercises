#include <stdio.h>
int main()
{
    int n,r,p,q,m,a,b,c;
    printf("Enter your n and r: ");
    scanf("%d %d",&n,&r);
    a=b=c=1;
    for(p=n ; p>=1 ; p--)
        a*=p;
    for(q=n-r ; q>=1 ; q--)
        b*=q;
    for(m=r ; m>=1 ; m--)
        c*=m;
    printf("\n%dC%d = %d\n",n,r,a/(b*c));
}
