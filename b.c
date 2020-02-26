#include<stdio.h>
void main () 
{
    int k,i,j;
    printf("enter the number: ");
    scanf("%d",&j);
    k=1;
    for(i=j;i>=1;i--){
    k=k*j;
    j--;
    }
    printf("the factorial is %d",k);
}