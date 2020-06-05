
/*program for finding given number is even or odd by using parameter
passing */
#include<iostream.h>
#include<conio.h>
class evenodd
    {
      private:

      public:
	      void find(int x)
	      {
	       if(x%2==0)
		cout<<"Given number is even"<<endl<<endl;
	       else
		cout<<"Given number is odd"<<endl;
	      }
    };

  void main()
  {
  evenodd obj;
  int n;
  clrscr();
  cout<<"enter any number to find even or odd"<<endl<<endl;
  cin>>n;
  cout<<endl;
  obj.find(n);
  getch();
  }