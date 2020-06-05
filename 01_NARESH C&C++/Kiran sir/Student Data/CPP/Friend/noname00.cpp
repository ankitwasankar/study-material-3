#include<iostream.h>
#include<conio.h>
class abc
{
int n;
public:void getdata()
{
cout<<"enter n value";
cin>>n;
}
friend void display (class abc obj );
} ;
inline void display(class abc obj)
{
int i,j;
for(i=1;i<=10;i++)
{
j=obj.n*i;
cout<<obj.n<<"*"<<i<<"="<<j<<endl;
}
}
void main()
{
abc obj;
obj.getdata();
display(obj);
getch();
}