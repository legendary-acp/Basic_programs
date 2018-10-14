/*Program to Output the account balance after the attempted transaction, given as a number with two digits of precision.If not enough than output current balance*/
/*Input: amount which person want to withdraw and initial balance*/
/*Conditions: withdraw only if amount to withdraw is multiple of 5 and for each withdrawl chrges 0.50*/
#include<stdio.h>
int main()
{
int a;
float bal;
scanf("%d",&a);
scanf("%f",&bal);
float rem=0.00;
if(0<a<=2000&&0<=bal<=2000)
{
if((a%5==0)&&(bal>=a+0.50))
{
rem =bal-a-0.50;
printf("%f",rem);
}
else{
rem=bal;
printf("%f",rem);
}
}
return 0;
}
