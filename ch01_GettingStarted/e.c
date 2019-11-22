#include<stdio.h>
void main(){
    int length,breadth,perimeter,area,radius;
    float circumference;
    printf("enter the values");
    scanf("%d %d %d ", &length, &breadth, &radius);
    perimeter=(length+breadth)*2;
    area=length*breadth;
    circumference= 2*3.14*radius;
    printf("perimeter is %d , area is %d , circumference is %f",perimeter,area,circumference);

}