#include<stdio.h>
#include<conio.h>
void main()
{
float sum,n;
clrscr();
printf("Enter n value");
scanf("%f",&n);
sum = (n*((2*n)-2))/(n+1);
printf("sum = %f",sum);
getch();
}