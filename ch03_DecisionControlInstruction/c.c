#include<stdio.h>
void main(){
    int year;
    printf("enter the year ");
    scanf("%d",&year);
    if( year%4==0){
        if(year%100!=0){
        printf("given year is leap year");
        }
        else if(year%400==0){
            printf("given year is leap year");
        }
    }
    else{
        printf("given year is not leap year");
    }
}