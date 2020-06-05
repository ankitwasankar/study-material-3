#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter any char");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':printf("vowel");
			break;
default :printf("consonent");
}
getch();
}