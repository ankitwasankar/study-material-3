#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2=1,n3,t1,t2,t3;
for(n1=1;n1<=300;n1++)
{
t1=n1*n1*n1;
while(n2<n1)
{
t2=n2*n2*n2;
for(n3=1;n3<n2;n3++)
{
t3=n3*n3;
if(t3==t1+t2)
printf("%d*%d=%d*%d*%d+%d*%d*%d\n",n3,n3,n2,n2,n2,n1,n1,n1);
}
n2++;
}
}
getch();
}
