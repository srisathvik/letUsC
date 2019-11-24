#include<stdio.h>
void main(){
int i,j,k,angle;
printf("enter the angles");
scanf("%d%d%d",&i,&j,&k);
angle=i+j+k;
if(angle==180){
    printf("triangle is valid");
}
else{
    printf("triangle is not valid");
}

}