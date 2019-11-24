#include<stdio.h>
#include<conio.h>
int main (void)
{
int num;
printf ("enter your number: ");
scanf ("%i", &num);
if(num < 0){
num = -num;
}
printf ("The absolute value is %i\n", num);

return 0;
}