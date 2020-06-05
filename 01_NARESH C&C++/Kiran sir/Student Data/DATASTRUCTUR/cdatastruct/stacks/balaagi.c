#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name1[20],name2[20];

printf("enter name1:");
scanf("%s",name1);
printf("enter name2:");
scanf("%s",name2);
if(!strcmp(name1,name2))
printf("yes");
else
printf("no");
getch();
}