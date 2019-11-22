#include<stdio.h>
void main(){
    int num,i,j,k,l,m,n,o,p,sum;
    printf("enter the number");
    scanf("%d",&num);
    i=num/10000;
    j=num%10000;
    k=j/1000;
    l=j%1000;
    m=l/100;
    n=l%100;
    o=n/10;
    p=n%10;
    sum=p*10000+o*1000+m*100+k*10+i;
    printf("sum is %d",sum);
}