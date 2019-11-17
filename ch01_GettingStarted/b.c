#include<stdio.h>
void main(){
    float kms, mts, fts, ins, cms;
    printf("enter the distance in km");
    scanf("%f",&kms);
    mts=kms*1000.0;
    fts=mts*3.28;
    ins=12.0*fts;
    cms=100*mts;
    printf("%f mts %f fts %f inches %f cms ",mts,fts,ins,cms);


}