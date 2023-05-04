#include<stdio.h>
int main(){
int a,b,c,d,m,n;
printf("insert the two numbers:");
scanf("%d,%d",&a,&b);
for(c=1;c<(a*a+b*b);c=c+1){
if(c%a==0&&c%b==0){
break;
}}
printf("lcm is %d\n",c);

d=a*b/c ;
printf("GCD us %d",d);









}


