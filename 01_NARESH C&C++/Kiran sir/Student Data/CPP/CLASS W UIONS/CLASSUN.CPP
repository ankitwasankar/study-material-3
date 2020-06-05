#include<iostream.h>
#include<conio.h>
union sumdif
  {
  private:
	  int x;
	  float y;
  public:
	  void getdata();
	  float sum();
  };

	void sumdif::getdata()
	  {
	  cout<<"enter x value(in integer)"<<endl<<endl;
	  cin>>x;
	  cout<<endl;
	  cout<<"enter y value(in float)"<<endl<<endl;
	  cin>>y;
	  cout<<endl;
	  }

   float sumdif::sum()
	  {
		   return(x+y);
	  }


  void main()
  {
  sumdif obj;
  float c;
  clrscr();
  obj.getdata();
  c=obj.sum();
  cout<<c;
        getch();
  }