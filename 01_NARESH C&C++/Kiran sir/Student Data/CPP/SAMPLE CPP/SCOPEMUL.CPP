
/* This will give multi table of a given number by using scope resoluation
 oprator(::) */

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
	    void getdata();
	    void multi();
    };

	 void mul::getdata()
	    {
	     cout<<"enter number for multi table"<<endl<<endl;
	     cin>>n;
	    }
	    void mul::multi()
	    {
	      cout<<"multi table of "<<n<<endl<<endl;

	      for(i=1;i<=10;i++)
	       {
		k=n*i;
		cout<<n<<"*"<<i<<"="<<k<<endl<<endl;
	       }
	    }



   void main()
   {
   mul obj;
   clrscr();
   obj.getdata();
   obj.multi();
   getch();
   }