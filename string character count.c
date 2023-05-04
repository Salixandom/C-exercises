#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    gets(str);
    int x=strlen(str);
    int flag[x],count[x];
    for(int i=0 ; i<=x ; i++)
    {
        for(int j=i+1 ; j<=x ; j++)
        {
            if(str[i]==str[j])
            {
                count[i]++;
                flag[j]=1;
            }
        }
    }
    for(int i=0 ; i<=x ; i++)
    {
        if(flag[i]==0)
            printf("\n%c appears %d time",str[i],count[i]+1);
    }
}