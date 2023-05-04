#include <stdio.h>
int main()
{
    int n,m,i,x;
    printf("Enter your number : ");
    scanf("%d",&n);
    printf("Enter your range : ");
    scanf("%d",&m);
    printf("\n");
    for(i=1,x=n ; i<=m ; i++,x+=n)
        printf("%d X %d = %d\n",n,i,x);
}
