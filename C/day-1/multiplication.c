#include<stdio.h>
int main(){
int i ,n,mult;
printf("enter the value of n ");
scanf("%d",&n);
for(i=1;i<=10;i++){
    mult=i*n;
    printf("%d\n",mult);
}
return 0;
}