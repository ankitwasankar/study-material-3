#include<iostream.h>
#include<conio.h>
void main()
{
int i;
char *ptr=new char[20];
for(i=0;i<=10;i++)
{
cin>>ptr[i];
cout<<endl;
}
for(i=0;i<=10;i++)
{
cout<<ptr[i]<<"\t";
}
getch();
}