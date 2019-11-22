#include<stdio.h>
#include<math.h>
void main(){
    int x,y;
    float r,p;
    printf("enter x,y values");
    scanf("%d,%d",&x,&y);
    r=sqrt(x*x+y*y);
    p=atan(y/x);
    printf("r is%f\np is%f",r,p);
    }