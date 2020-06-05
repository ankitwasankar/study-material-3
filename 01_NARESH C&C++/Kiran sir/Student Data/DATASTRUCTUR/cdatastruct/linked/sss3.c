#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3;
clrscr();
printf("Enter subject marks");
scanf("%d%d%d", &s1,&s2,&s3);
if (s1>=35 && s2>=35 && s3>=35)
{
printf("student pass");
}
else
{
printf("student fail");
}
getch();
}