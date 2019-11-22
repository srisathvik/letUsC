#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,p;
    float area;
    printf("enter the lengths");
    scanf("%d%d%d",&a,&b,&c);
    p=(a+b+c)/3;
    area=sqrt(p*(a-p));
    printf("area is %f",area);

}