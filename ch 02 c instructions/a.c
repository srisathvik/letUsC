#include<stdio.h>
void main(){
    int num,t,h,te,j,k,l,sum;
    printf("enter the number");
    scanf("%d",&num);
    t=num/1000;
    h=num%1000;
    te=h/100;
    j=h%100;
    k=j/10;
    l=j%10;
    sum=t+te+k+l;
    printf("sum is %d",sum);
}