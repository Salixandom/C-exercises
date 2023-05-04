#include<stdio.h>
int main()
{

int n,product,x;
      printf( " please insert the number of which's times table u want to see:");
     scanf("%d",&n);
     x=1;
     while( x<=10){
            product=n*x;
     printf("%d*%d==%d\n",n,x,product);
     x++;


     }


     return 0;








     }
