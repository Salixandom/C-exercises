#include<stdio.h>
int main()
{
int n,x,i;
  printf("insert the number of which's times table u want to see:");
  scanf("%d",&n);
  x=0;
 for (i=1;i<11;i=i+1)
    {
 x=x+n;
 printf("%d*%d=%d\n",n,i,x);


 }













  return 0;
}
