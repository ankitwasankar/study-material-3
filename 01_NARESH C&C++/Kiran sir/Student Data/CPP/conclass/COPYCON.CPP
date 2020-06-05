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
	 con(con &ptr)
	 {
	 f0=ptr.f0;
	 f1=ptr.f1;
	 fbi=ptr.fbi;
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
   clrscr();
   for(i=0;i<=3;i++)
   {
   obj.dis();
   obj.inc();
   getch();
   }

   }