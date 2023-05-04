#include <stdio.h>
#include <string.h>
int main()
{
    int n,x,y,z;
    printf("Input number of strings: ");
    scanf("%d",&n);
    char st[n][100],temp[100];
    for(x=0 ; x<n ; x++)
    {
        printf("String %d: ",x+1);
        scanf("%s",st[x]);
    }
    for(x=0 ; x<n-1 ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            z=strcmp(st[x],st[y]);
            if(z>0)
            {
                strcpy(temp,st[x]);
                strcpy(st[x],st[y]);
                strcpy(st[y],temp);
            }
        }
    }
    printf("\nThe strings appears after sorting: \n");
    for(x=0 ; x<n ; x++)
        printf("%s\n",st[x]);
}
