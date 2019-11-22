#include<stdio.h>
#include<math.h>
void main(){
    int num,a,b,c,d,e,f,g,h,i,j,total;
    printf("enter the number");
    scanf("%d",&num);
    a=num/100;
    b=num%100;
    c=b/50;
    d=b%50;
    e=d/10;
    f=d%10;
    g=f/5;
    h=f%5;
    i=h/2;
    j=h%2;
    total=a+c+e+g+i+j;
    printf("minimum number of notes is %d",total);

}