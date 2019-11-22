#include<stdio.h>
#include<math.h>
void main(){
    float t,v,wcf;
    printf("enter the values of t,v\n");
    scanf("%f%f",&t,&v);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("value of wcf is %f",wcf);
}
