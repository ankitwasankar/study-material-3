#include<iostream.h>
#include<conio.h>
class con
  {
  int fo,f1,f2;
  public:
	 con()
	 {
	 f0=0;
	 f1=1;
	 fib=f0+f1;
	 }
         ~con()
         {
          cout<<"Data deleted";
          
}
	 void inc()
	 {
	 f0=f1;
	 f1=fbi;
	 fib=f0+f1;
	 }
	 void dis()
	 {
	 cout<<fbi;
	 }
   };
   void main()
   {
   con obj;
   for(i=0;i<=5;i++)
   {
   obj.dis();
   obj.inc();
   }
  }