#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
a=2,b=4,c=6;
for(d=a;d<=c;d=d+1){
if(d!=a&&d!=b&&d!=c){
    continue;
}
 for(e=a;e<=c;e=e+1){
if(e!=a&&e!=b&&e!=c){
    continue;
}
   for(f=a;f<=c;f=f+1){
if(f!=a&&f!=b&&f!=c)
    continue;
    if(e!=d&&f!=d&&f!=e)
    printf("%d,%d,%d\n",d,e,f);
 }
 }
}
return 0;
}
