
/*This progream will displays the multip table of given number*/

#include<conio.h>
#include<iostream.h>
class mul
    {
     private:
	     int i;
	     int j;
	     int k;
	     int n;
    public:
	    void getdata()
	    {
	     cout<<"enter number for multi table"<<endl<<endl;
	     cin>>n;
	    }
	    void multi()
	    {
	      cout<<"multi table of "<<n<<endl<<endl;

	      for(i=1;i<=10;i++)
	       {
		k=n*i;
		cout<<n<<"*"<<i<<"="<<k<<endl<<endl;
	       }
	    }
   };


   void main()
   {
   mul obj;
   clrscr();
   obj.getdata();
   obj.multi();
   getch();
   }