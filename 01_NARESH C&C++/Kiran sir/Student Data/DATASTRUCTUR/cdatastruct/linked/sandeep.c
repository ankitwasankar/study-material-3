#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,min,max;
clrscr();
printf("enter array value");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max =a[0];
for(i=0;i<10;i++)
{
if(max<a[i])
{
max =a[i];
}
}
printf("max=%d",max);

getch();
}
