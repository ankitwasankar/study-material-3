//EXAMPLE PROGRAM FOR PROTECTED MEMBERS
# include <iostream.h>
# include <conio.h>
class A
{
 protected:
 int a,b;
};
class B : public A
{
 int c,d;
 public:
 void input()
 {
   cout<<"ENTER FOUR INTEGERS   ";
   cin>>a>>b>>c>>d;
 }
 void output()
 {
   cout<<"FIRST NO IS  "<<a<<endl;
   cout<<"SECOND NO IS "<<b<<endl;
   cout<<"THIRD NO IS "<<c<<endl;
   cout<<"FOURTH NO IS "<<d<<endl;
 }
};
void main()
{
 B obj;
 clrscr();
 obj.input();
 obj.output();
 getch();
}