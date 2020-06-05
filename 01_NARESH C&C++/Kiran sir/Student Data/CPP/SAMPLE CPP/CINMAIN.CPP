
/* This program will give addition and substraction of give two
numbers*/

#include<iostream.h>
#include<conio.h>

  void main()
  {
  class sumdif
  {
  private:
	  int x;
	  int y;
	  int sum1,dif1;
  public:
	  void getdata()
	  {
	  cout<<"enter x value"<<endl<<endl;
	  cin>>x;
	  cout<<endl;
	  cout<<"enter y value"<<endl<<endl;
	  cin>>y;
	  cout<<endl;
	  }

	  void sum()
	  {
	   sum1=x+y;
	   cout<<"sumatio is ="<<sum1<<endl;
	  }
	  void dif()
	  {
	  dif1=x-y;
	   cout<<"difference is ="<<dif1<<endl<<endl;
	  }
  };

  sumdif obj;
  clrscr();
  obj.getdata();
  obj.dif();
  obj.sum();
  getch();
}