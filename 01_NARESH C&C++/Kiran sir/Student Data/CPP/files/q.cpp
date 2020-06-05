#include<iostream.h>
#include<conio.h>
class abc
{
friend class def;
public : int sno;
			float savg;
 void getdata()
 {
  cout<<"s.no is";
  cin>>sno;
  cout<<"student average";
  cin>>savg;
  }

  };
  class def
  {
public:char sname[20];
		 int swt;
void display(class abc obj)
{
cout<<"student name";
cin>>sname;
cout<<"student weight";
cin>>swt;
clrscr();
cout<<sname<<endl<<obj.sno<<endl<<swt<<endl<<obj.savg;
}
};

void main()
{
abc obj;
def obj1;
obj.getdata();
obj1.display(obj);
getch();
}
