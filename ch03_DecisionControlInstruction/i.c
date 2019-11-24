#include<stdio.h>
void main() {
    int l,b,perimeter,area;
    printf("enter the values of length and breadth");
    scanf("%d%d",&l,&b);
    area=l*b;
    perimeter=(l+b)*2;
    if(area>perimeter){
        printf("area is greater than its perimeter");
    }
    else{
        printf("area is less than its perimeter");
    }
}