#include<iostream.h>
#include<conio.h>
class c1
{
int n;
public:void getdata()
{
cout<<"enter n values";
cin>>n;
}
friend void display(class c1 xx);
};
inline void display(c1 xx)
{
int i,j;
for(i=0;i<10;i++)
{
j=xx.n*i;
cout<<xx.n<<"*"<<i<<"="<<j<<endl;
}
};
void main()
{
c1 obj1;
obj1.getdata();
display(obj1);
getch();
}

