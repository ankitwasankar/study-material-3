//example program for virtual functions
# include <iostream.h>
# include <conio.h>
class base
{
 public:
 void virtual display()
 {
  cout<<"display base "<<endl;
 }
 void virtual show()
 {
  cout<<"show base class "<<endl;
 }
};
class derived : public base
{
 public:
 void display()
 {
  cout<<"Display derived "<<endl;
 }
 void show()
 {
 // cout<<"\n Show derived ";
 }
};
void main()
{
 base b;
 clrscr();
 derived d;
 base *bptr;
 cout<<"\n bptr points to Base \n";
 bptr=&b;
 bptr->display();	//CALLS BASE VERSION
 bptr->show();		//CALLS BASE VERSION
 cout<<"\n\n bptr points to derived \n";
 bptr=&d;
 bptr->display();	//CALLS derived VERSION
 bptr->show();          //CALLS DERIVED VERSION
 getch();
}
