#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int stno;
float av;
char st[20];
FILE *r;
clrscr();
printf("ent st name");
gets(st);
printf("ent st roll.no:");
scanf("%d",&stno);
printf("ent st average");
scanf("%f",&av);
r=fopen("arg.txt","w");
fprintf("%d\n%s\n%f",st,stno,av);
fclose(r);
}
