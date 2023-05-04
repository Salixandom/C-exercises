#include <stdio.h>
int main()
{
    int n,a,b,c,d;
    printf("Enter your range: ");
    scanf("%d",&n);
    printf("-----------------------------------------------------\n");
    printf("Numbers that can be expressed as the sum of two cubes upto %d are: \n\n",n);
    for(a=1 ; a<=n ; a++)
    {
        int a3=a*a*a;
        if(a3>n)
            break;
        for(b=a ; b<=n ; b++)
        {
            int b3=b*b*b;
            if(a3+b3 > n)
                break;
            for(c=a+1 ; c<=n ; c++)
            {
                int c3=c*c*c;
                if(c3>a3+b3)
                    break;
                    for(d=c ; d<=n ; d++)
                    {
                        int d3=d*d*d;
                        if(c3+d3>a3+b3)
                            break;
                        if(c3+d3 == a3+b3)
                        {
                            printf(" %5d = ",a3+b3);
                            printf("%3d^3 + %3d^3 = ",a,b);
                            printf("%3d^3 + %3d^3\n",c,d);
                        }
                    }
            }
        }
    }
}
