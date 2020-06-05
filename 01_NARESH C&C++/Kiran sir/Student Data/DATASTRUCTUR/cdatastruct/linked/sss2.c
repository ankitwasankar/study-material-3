#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter a value");
scanf("%d",&a);
b=a%2;
if (b==0)
{
printf("Given number is Even\n");
printf("Given number is %d",a);
}
else
{
printf("Given number is Odd\n");
printf("Given number is %d",a);
}
getch();
}