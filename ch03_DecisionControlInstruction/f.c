#include<stdio.h>
void main(){
    int shyam,ram,ajay;
    printf("enter the ages of ram,shyam,ajay");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if(ram<shyam&&ram<ajay){
        printf("ram is youngest");
    }
        else if(shyam<ram&&shyam<ajay){
            printf("shyam is youngest");
        }
        else if(ajay<ram&&ajay<shyam){
            printf("ajay is yoyngest");
        }
    
}