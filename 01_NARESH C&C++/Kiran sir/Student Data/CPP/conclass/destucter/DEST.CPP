#include<iostream.h>
#include<conio.h>
class con
  {
  int f0,f1,fbi;
  public:
	 con()
	 {
	 f0=0;
	 f1=1;
	 fbi=f0+f1;
	 }
	 ~con()
	 {
	 cout<<"Data is deleted from memory";
	 }
	 void inc()
	 {
	 f0=f1;
	 f1=fbi;
	 fbi=f0+f1;
	 }
	 void dis()
	 {
	 cout<<fbi<<endl;
	 }
};
   void main()
   {
   con obj;
   int i;
   for(i=0;i<=5;i++)
   {
   obj.dis();
   obj.inc();
   getch();
   }
   }