
#include<stdio.h>
#include<conio.h>
void main()
{
int sno;
char st[20];
float av;
clrscr();
FILE *p;
printf("ent st name\n");
gets(st);
printf("ent st roll no:\n");
scanf("%d",&sno);
printf("ent st av\n");
scanf("%f",&av);
p=fopen("rag","w");
fprintf(p,"%d\n%s\n%f",sno,st,av);
fclose(p);
}
