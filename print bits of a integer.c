#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=8*sizeof(n)-1 ; i>=0 ; i--)
        printf("%d",(n>>i)&1);
}