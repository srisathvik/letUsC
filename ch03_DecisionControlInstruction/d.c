#include<stdio.h>

void main()

{

int year,a,i,day,j;

printf("\nEnter a year :");

scanf("%d",&year);

i=year%2001;

if(i<7){



if(i==0)

printf("\nIt is Monday");

if(i==1)

printf("\nIt is Tuesday");

if(i==2)

printf("\nIt is Wednesday");

if(i==3)

printf("\nIt is Thursday");

if(i==4)

printf("\nIt is Friday");

if(i==5)

printf("\nIt is Saturday");

if(i==6)

printf("\nIt is Sunday");
}
else if (i>=7){
    i=i%7;
    if(i==0)

printf("\nIt is Monday");

if(i==1)

printf("\nIt is Tuesday");

if(i==2)

printf("\nIt is Wednesday");

if(i==3)

printf("\nIt is Thursday");

if(i==4)

printf("\nIt is Friday");

if(i==5)

printf("\nIt is Saturday");

if(i==6)

printf("\nIt is Sunday");
}
}