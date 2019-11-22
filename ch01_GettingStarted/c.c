#include<stdio.h>
void main(){
int i,j,k,l,m,total,percentage;
printf("enter the marks");
scanf("%d%d%d%d%d",&i,&j,&k,&l,&m);
total=i+j+k+l+m;
percentage=(total/500)*100;
printf("total is %d and percentage is %d",total,percentage);}
