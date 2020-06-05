#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter a vaclu");
scanf("%d",&a);
if(a%2==0)
{
printf("even is");
printf("%d",a);
}
if(a%2!=0)
{
printf("odd");
printf("%d",a);
}
getch();
}