#include<stdio.h>
void main() {
    int i,j,k,,otp;
    for(i=1;i<=10;i++){
        printf("enter the total time worked by worker %d:  ",i);
        scanf("%d",&j);
        k=j-40;
        otp=12*k;
        printf("\nthe over time pay is %d\n",otp);
    }
}