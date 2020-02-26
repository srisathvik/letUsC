#include<Stdio.h>
void main(){
    char i;
    int j;
    printf("enter input");
    scanf("%c",&i);
    j =i;
    if(j>64&&j<91){
        printf("given character is capital letter");
    }
    else if(j>96&&j<123){
         printf("given character is small letter");
    }
    else if(j>47&&j<58){
         printf("given character is integer");
    }
    else if(j>=0&&j<48||j>57&&j<65||j>90&&j<97||j>122&&j<128){
         printf("given character is special symbol");
    }

}