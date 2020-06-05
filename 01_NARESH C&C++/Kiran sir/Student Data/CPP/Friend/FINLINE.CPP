#include<iostream.h>
#include<conio.h>
class abc
   {
   int x;
   public:
	  void getdata();
	  friend void display(class abc);
   };
   void abc::getdata()
   {
   cout<<"Enter x value";
   cin>>x;
   }
   inline void display(class abc aaa)
   {
   cout<<"Value of x is"<<aaa.x;
   }

   void main()
   {
   abc obj;
   clrscr();
   obj.getdata();
   display(obj);
   getch();
   }