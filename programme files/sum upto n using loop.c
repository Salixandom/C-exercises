#include<stdio.h>
int main(){

int n,x,s;
printf("sum of positive integers upto:");
scanf("%d",&n);
s=0;
for(x=1;x<=n;x=x+1){
s=s+x;
if(x==n){
printf("sum is %d",s);}

}







}
