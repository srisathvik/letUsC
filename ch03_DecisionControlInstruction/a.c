#include<stdio.h>
void main(){
int cp,sp,profit,loss;
printf("enter cost price and selling price");
scanf("%d%d",&cp,&sp);
if(cp<sp){
    profit = sp - cp;
    printf("seller has profit\nprofit is %d rupees",profit);
}
else{
    loss = cp - sp;
    printf("seller has loss\nthe loss is %d rupees",loss);
}
}