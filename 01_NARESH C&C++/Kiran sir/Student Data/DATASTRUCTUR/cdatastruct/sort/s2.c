#include<stdio.h>
#include<conio.h>
void main()
{
int runs;
clrscr();
printf("enter runs:");
scanf("%d",&runs);
switch(runs)
{
	case 0 : printf("Duck out");
				break;
	case 50: printf("Half century");
				break;
	case 100: printf("Century");
				 break;
	case 200: printf("Double century");
				 break;
	default: printf("Record");
}
getch();
}
