#include<stdio.h>
#include<conio.h>
void main()
{
  int a,*p,*p1;
  clrscr();
  a=10;
  p=&a;
  printf("The address of a=%d\n",a);
  printf("The address of p=%u\n",p1);
  p1=p++;
  printf("The address of addition arithmatic p1=%u\n",p1);
  p1=p--;
  printf("The address of subtraction arithmatic p1=%u\n",p1);
  getch();
}