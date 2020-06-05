#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter your character");
scanf("%c",&ch);
if (ch=='y' || ch=='Y')
{
printf("Entered character is : Y");
}
else
{
printf("Entered character is : N");
}
getch();
}
