#include<stdio.h>
#include<conio.h>
void main()
{
float x1,x2,y1,y2,m1;
clrscr();
printf("enter x1,x2 value:");
scanf("%f%f",&x1,&x2);
printf("enter y1,y2 value:");
scanf("%f%f",&y1,&y2);
m1=((x1-x2)/(y1-y2))*100;
printf("m1=%f",m1);
getch();
}
