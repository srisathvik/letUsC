#include<stdio.h>
void main(){
    int hardness,tensilestrength;
    float carboncontent;
    printf("enter the values  of hardness,carbon content,tensile strength");
    scanf("%d%f%d", &hardness,&carboncontent,&tensilestrength);
    if(hardness>50&&carboncontent<0.7&&tensilestrength>5600){
        printf("grade is 10");
    }
    else if(hardness>50&&carboncontent<0.7&&tensilestrength<=5600){
         printf("grade is 09");
    }
     else if(hardness<=50&&carboncontent<0.7&&tensilestrength>5600){
         printf("grade is 08");
     }
      else if(hardness>50&&carboncontent>=0.7&&tensilestrength>5600){
           printf("grade is 07");
      }
     else if(hardness>50||carboncontent<0.7||tensilestrength>5600){
                    printf("grade is 06");
     }
     else if(hardness<=50&&carboncontent>=0.7&&tensilestrength<=5600){
           printf("grade is 05");
      }
}