
//EXAMPLE PROGRAM FOR SINGLE INHERITANCE
# include <iostream.h>
# include <conio.h>
class first
{
 int a;
 public:
 int b;
 void input()
 {
  cout<<"ENTER THE VALUE FOR A  ";
  cin>>a;
 }
 void print()
 {
  cout<<"THE VALUE OF A IS  "<<a<<endl;
  }
};
class second : public first
{
 int c;
 public:
 void accept()
 {
  cout<<"ENTER THE VALUE FOR B ";
  cin>>b;		//PUBLIC MEMBER OF THE BASE CLASS
  cout<<"ENTER THE VALUE FOR C  ";
  cin>>c;
 }
 void display()
 {
   cout<<"THE VALUE OF B IS  "<<b<<endl;
   cout<<"THE VALUE OF C IS  "<<c<<endl;
 }
};
void main()
{
 second s;
 clrscr();
 s.input(); 		//MEMBER FUNCTION OF THE BASE CLASS
 s.accept();		//MEMBER FUNCTION OF THE DERIVED CLASS
 s.print();		//MEMBER FUNCTION OF THE BASE CLASS
 s.display();		//MEMBER FUNCTION OF THE DERIVED CLASS
 s.b=10;                //PUBLIC MEMBER OF THE BASE CLASS
 cout<<"THE VALUE OF B IS IN MAIN "<<s.b<<endl;
 s.display();
 getch();
}