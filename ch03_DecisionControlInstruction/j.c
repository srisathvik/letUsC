#include<stdio.h>
void main(){

    int x1,y1,x2,y2,x3,y3,a;
    printf("enter the values of (x1,y1),(x2,y2),(x3,y3)");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    a = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(a==0){
        printf("points lies on same line");
    }
    else{
        printf("points doesnot lies on same line");
    }
}