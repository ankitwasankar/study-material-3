#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter character: ");
scanf("%c",&ch);
switch(ch)
{
	case 'a':
	case 'e':
	case 'i':
	case 'o': 
	case 'u': printf("Given character is ovel");
				 break;
	default: printf("Given character is consonent");
}
getch();
}
