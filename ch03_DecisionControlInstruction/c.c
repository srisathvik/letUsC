#include<stdio.h>
void main(){
    int year;
    printf("enter the year ");
    scanf("%d",&year);
    if( year%4==0 && year%100!=0 || year%400==0){
        printf("given year is leap year");
    }
    else{
        printf("given year is not leap year");
    }
}