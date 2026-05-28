#include <stdio.h>
int main(){
 int i,n,num;
 printf("enter the value");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    num+=i;
 }
printf("the sum of digit:%d\n",&num);
return 0;
}