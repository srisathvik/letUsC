#include<stdio.h>
#include<math.h>
void main(){
    float l1,l2,g1,g2,d;
    printf("enter the latitude and longitude");
    scanf("%f%f%f%f",&l1,&l2,&g1,&g2);
    d=3963*(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("%d",d);
}