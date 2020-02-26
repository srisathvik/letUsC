#include<stdio.h>
void main(){
    int w,h;
    float bmi;
    printf("enter weight and height");
    scanf("%d%d",&w,&h);
    bmi=w/h*h;
    if(bmi<15){
        printf("starvation");
    }
    else if(bmi>15&&bmi<17.6){
        printf("anorexic");
    }
     else if(bmi>17.5&&bmi<18.6){
        printf("under weight");
    }
     else if(bmi>18.5&&bmi<25){
        printf("ideal");
    }
     else if(bmi>24.9&&bmi<26){
        printf("over weight");
    }
     else if(bmi>29.9&&bmi<30){
        printf("obese");
    }
     else if(bmi>=40){
        printf("morbidly obese");
    }

}