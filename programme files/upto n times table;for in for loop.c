#include<stdio.h>
int main()
{
int n,i,x,y;
printf("TIMES TABLE U WANT UPTO:");
scanf("%d",&x);
for(n=1;n<=x;n=n+1)
{y=0;//if didint use sum, then this line would not exist//
for(i=1;i<11;i=i+1){
   y=y+n;//this line would not exist if didnt use sum//
printf("%d*%d=%d\n",n,i,y);//in plac eof y it would have been n*i//

}



}












return 0;
}
