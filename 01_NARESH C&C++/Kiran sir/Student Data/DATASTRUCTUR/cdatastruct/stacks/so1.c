#include<stdio.h>
#include<conio.h>
void main()
{
 int s1,s2,s3;
 clrscr();
 float tot,avg;
 printf("enter s1,s2,s3 marks");
 scanf("%d%d%d",&s1,&s2,&s3);
 tot=s1+s2+s3;
 avg=tot/3;
 if(s1>=35&&s2>=35&&s3>=35)
 {
 printf("student pass\n");
 if(avg>75)
 {
 printf("grade A+");
 }
 else
 {
 if(avg>=60&&avg<=75)
 {
 printf("grade A");
 }
 if(avg>=50&&avg<60)
 {
 printf("grade B");
 }
 else
 {
 if(avg<50)
 {
 printf("grade C");
 }
 }}
 }
 else
 {
 printf("student fail\n");
 printf("grade D");
 }
 }
