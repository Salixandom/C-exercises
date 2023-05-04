#include <stdio.h>
int main()
{
    int t,n,count1=0,count2=0;
    char a[100];
    scanf("%d",&t);
    for(int x=0 ; x<t ; x++)
    {
        scanf("%d",&n);
        for(int y=0 ; y<n ; y++)
        {
            scanf("%c",&a[y]);
        }
        for(int y=0 ; y<n-1 ; y++)
        {
            if(a[y]-'0'+a[y+1]-'0'==1 && count1%2==0)
            {
                printf("+");
                count1++;
            }
            else if((a[y]-'0'+a[y+1]-'0')==2 && count2%2==0)
            {
                printf("-");
                count2++;
            }
            else if(a[y]-'0'+a[y+1]-'0'==0)
                printf("+");
            else if(a[y]-'0'+a[y+1]-'0'==1 && count1%2!=0)
            {
                printf("-");
                count1++;
            }
            else if(a[y]-'0'+a[y+1]-'0'==2 && count2%2!=0)
            {
                printf("+");
                count2++;
            }
        }
        count1=count2=0;
    }
}
