#include <stdio.h>
int n;

int print_elm(int val[])
{
    static int i=0;
    if(i<n)
    {
        printf("%d ",val[i]);
        i++;
        return print_elm(val);
    }
    else
    {
        printf("\n");
        return 0;
    }
}

int main()
{
    int x;
    printf("Enter how many elements you want to use: ");
    scanf("%d",&n);
    printf("---------------------------------------------------\n");
    int val[n];
    for(x=0 ; x<n ; x++)
    {
        printf("Value %d: ",x+1);
        scanf("%d",&val[x]);
    }
    printf("\n");
    print_elm(val);
}
