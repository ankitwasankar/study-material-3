#include<stdio.h>
#include<conio.h>
void main()
{
float wd,bal=6000;
clrscr();
printf("Enter withdrawl amount");
scanf("%f",&wd);
if (wd<bal && (bal-wd)>=500)
{
bal = bal-wd;
printf("Current balance = %f",bal);
}
else
{
printf("Unable to process");
}
getch();
}