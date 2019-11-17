#include<stdio.h>
void main(){
    int basic, da, hra, gross;
    printf("Enter Basic salary\n");
    scanf("%d", &basic);
    da = (40*basic)/100;
    hra = (20*basic)/100;
    gross = basic + da + hra;
    printf("%d", gross);
}