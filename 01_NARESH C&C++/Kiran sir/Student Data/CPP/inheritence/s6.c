#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter char:");
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
{
printf(" y means yes");
}
else
{
if(ch=='n'||ch=='N')
{
printf(" n means no");
}
else
{
printf("%c no meaning",ch);
}
}
getch();
}