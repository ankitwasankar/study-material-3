#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fsum=0;
printf("enter n value");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
fsum=fsum+i;
}
printf("%d factors sum is=%d",n,fsum);
getch();
}
