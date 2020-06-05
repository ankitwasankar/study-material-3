//EXAMPLE PROGRAM FOR CONSTRUCTOR WITH ARGUMENTS
//IN BASE CLASS
# include <iostream.h>
# include <conio.h>
class base
{
  public:
  base(int x)
  {
    cout<<"X VALUE IS  "<<x<<endl;
    cout<<"INSIDE BASE CLASS CONSTRUCTOR "<<endl;
  }
  void display()
  {
    cout<<"INSIDE DISPLAY OF BASE"<<endl;
  }
};
class derived : public base
{
  public:
  derived(int x,int y) : base(x)
  {
    cout<<"Y VALUE IS   "<<y<<endl;
    cout<<"INSIDE DERIVED CLASS CONSTRUCTOR  "<<endl;
  }
  void print()
  {
    cout<<"INSIDE PRINT OF DERIVED"<<endl;
  }
};
void main()
{
  clrscr();
  derived d(10,20);
  d.display();
  d.print();
  getch();
}
