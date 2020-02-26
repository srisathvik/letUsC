#include<stdio.h>
void main(){
    int l1,l2,l3;
 printf("enter the sides of the triangle");
 scanf("%d%d%d",&l1,&l2,&l3);
 if(l1+l2>l3&&l1+l3>l2&&l2+l3>l1){
     printf("triangle is valid");
 }
 else{
     printf("triangle is not valid");
 }

}