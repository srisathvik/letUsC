#include<stdio.h>
#include<math.h>
void main(){
    int angle;
    float value,a,b,c,d,e,f;
    printf("enter the angle");
    scanf("%d",&angle);
    a=sin(angle);
    b=cos(angle);
    c=tan(angle);
    d=1/sin(angle);
    e=1/cos(angle);
    f=1/tan(angle);
    printf("sin(%d) is %f\ncos(%d) is %f\ntan(%d) is %f\ncosec(%d) is %f\nsec(%d) is %f\ncot(%d) is %f",angle,a,angle,b,angle,c,angle,d,angle,e,angle,f);

}