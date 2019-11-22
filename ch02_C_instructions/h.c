#include<stdio.h>
void main(){
    int c,d,a;
    printf("enter the values of c and d");
    scanf("%d%d",&c,&d);
    a=c;
    c=d;
    d=a;
    printf("the values of c and d are %d,%d",c,d);

}