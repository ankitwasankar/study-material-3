//EXAMPLE PROGRAM ON SINGLE INHERITANCE
# include <iostream.h>
# include <conio.h>
class A
{
 int x,y;
 public:
 void input(int p,int r)
 {
  x=p;
  y=r;
 }
 void print()
 {
  cout<<"X VALUE IS  "<<x<<endl;
  cout<<"Y VALUE IS  "<<y<<endl;
 }
};
class B : public A
{
 int m,n;
 public:
 void accept()
 {
  cout<<"ENTER TWO INTEGERS  ";
  cin>>m>>n;
 }
 void display()
 {
  cout<<"M VALUE IS   "<<m<<endl;
  cout<<"N VALUE IS   "<<n<<endl;
 }
};
void main()
{
 B t;
 clrscr();
 t.input(253,445);	//MEMBER FUNCTION OF BASE CLASS
 t.accept();		//MEMBER FUNCTION OF THE DERIVED CLASS
 clrscr();
 t.print(); 		//FUNCTION OF BASE CLASS
 t.display();		//FUNCTION OF THE DERIVED CLASS
 getch();
}