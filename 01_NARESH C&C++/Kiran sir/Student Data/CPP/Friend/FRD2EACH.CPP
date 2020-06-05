#include<iostream.h>
#include<conio.h>
class def;
class abc
   {
   int x;
   public:
	  void getdata();
	  void display();
	  friend int sum(abc,def);
   };
   class def
      {
      int y;
      public:
	  void getdata();
	  void display();
	  friend int sum(abc,def);
      };
   void abc::getdata()
   {
   cout<<"Enter x value=\t";
   cin>>x;
   cout<<endl<<endl;
   }
   void abc::display()
   {
   cout<<"X value is\t"<<x<<endl<<endl;
   }
   void def::display()
   {
   cout<<"Y Value  is\t"<<y<<endl<<endl;
   }
   void def::getdata()
   {
   cout<<"Enter y value=\t";
   cin>>y;
   cout<<endl<<endl;
   }
   int sum(abc one,def two)
   {
   int temp;
   temp=one.x+two.y;
   return(temp);
   }

   void main()
   {
   abc m;
   def n;
   clrscr();
   m.getdata();
   n.getdata();
   m.display();
   n.display();
   int t=sum(m,n);
   cout<<"Sum of two private values is =\t"<<t;
   getch();
   }