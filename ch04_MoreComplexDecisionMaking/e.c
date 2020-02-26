#include<stdio.h>
void main(){
int r,g,b;
float w,c,m,y,k=1.0,d,e,f;
printf("enter the values of red,green,blue");
scanf("%d%d%d",&r,&g,&b);
d=r/255;
e=g/255;
f=b/255;
if(d>e&&d>f){
    printf("white is %f",d);
}
else if(e>d&&e>f){
    printf("white is %d",e);
}
else if(f>d&&f>e){
    printf("white is %d",f);
}
c=((w-r)/255)/w;
m=((w-g)/255)/w;
y=((w-b)/255)/w;
k=1-w;
if(r==0&&g==0&&b==0){
    printf("the values of white,cyan,magenta,yellow,black is %d 0 0 0 1",w);
}
else {
     printf("the values of white,cyan,magenta,yellow,black is %d %d %d %d %d",w,c,m,y,k);
}
}