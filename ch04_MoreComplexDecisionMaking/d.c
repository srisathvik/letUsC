#include<stdio.h>
void main(){
    int l1,l2,l3;
    printf("enter the sides");
    scanf("%d%d%d",&l1,&l2,&l3);
    if(l1*l1==l2*l2+l3*l3||l2*l2==l1*l1+l3*l3||l3*l3==l1*l1+l2*l2){
        printf("triangle is right angled");
    }
    if(l1==l2&&l2==l3){
        printf("triangle is equilateral");
    }
    else if(l1!=l2&&l2!=l3&&l1*l1!=l2*l2+l3*l3&&l2*l2!=l1*l1+l3*l3&&l3*l3!=l1*l1+l2*l2){
        printf("triangle is scalen");
    }
    else if(l1==l2&&l1!=l3&&l2!=l3||l3==l3&&l2!=l1&&l3!=l1||l1==l3&&l1!=l3&&l2!=l1){
        printf("triangle is isosceles");
    }
}