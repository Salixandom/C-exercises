#include <stdio.h>

int * takeArrayInput(iny n)
{
    int a[n];
    for(int i=0 ; i<n ; i++)
        scanf("%d",&a[i]);
    return a;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int *a=takeArrayInput(n);

    for(int i=0 ; i<n ; i++)
        printf("%d ",a[i]);

    return 0;
}