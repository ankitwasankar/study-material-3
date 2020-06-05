

/*  This program will give addition and substraction of given two
numbers by scope resoluaion operatopr(::)*/

#include<iostream.h>
#include<conio.h>
class sumdif
  {
  private:
	  int x;
	  int y;
	  int sum1,dif1;
  public:
	  void getdata();
	  void sum();
	  void dif();
 };

    void sumdif::getdata()
	  {
	  cout<<"enter x value"<<endl<<endl;
	  cin>>x;
	  cout<<endl;
	  cout<<"enter y value"<<endl<<endl;
	  cin>>y;
	  cout<<endl;
	  }

    void sumdif::sum()
	  {
	   sum1=x+y;
	   cout<<"sumatio is ="<<sum1<<endl;
	  }
    void sumdif::dif()
	  {
	  dif1=x-y;
	  cout<<"difference is ="<<dif1<<endl<<endl;
	  }

  void main()
  {
  sumdif obj;
  clrscr();
  obj.getdata();
  obj.dif();
  obj.sum();
  getch();
  }