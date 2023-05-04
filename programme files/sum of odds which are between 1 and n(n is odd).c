#include<stdio.h>
int main()
{
int n,x,s;
printf("insert the num upto which u want to know the sum:");
scanf("%d",&n);
s=0;
for(x=1;x<=n;x=x+1){
if(x%2==0){
continue;
}
s=s+x;
}




printf("sum is %d",s);







}
