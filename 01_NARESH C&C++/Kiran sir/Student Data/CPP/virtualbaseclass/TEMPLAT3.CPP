//EXAMPLE PROGRAM FOR CLASS TEMPLATES
# include <iostream.h>
# include <conio.h>
template <class A>
class sample
{
 A n,m,f;
 public:
 void input()
 {
   cout<<"ENTER FIRST VALUE  ";
   cin>>n;
   cout<<"ENTER SECOND VALUE  ";
   cin>>m;
   cout<<"ENTER THIRD VALUE  ";
   cin>>f;
 }
 A total()
 {
   return n+m+f;
 }
 void output()
 {
   cout<<"FIRST VALUE IS  "<<n<<endl;
   cout<<"SECOND VALUE IS  "<<m<<endl;
   cout<<"THIRD VALUE IS  "<<f<<endl;
 }
};
void main()
{
  sample <int> T1;	//OBJECT DECLARED WITH INTEGER MEMBERS
  sample <float> T2;	//OBJECT DECLARED WITH FLOAT MEMBERS
  sample <long> T3;	//OBJECT DECLARED WITH LONG MEMBERS
  clrscr();
  cout<<"ENTER INTEGER VALUES  "<<endl;
  T1.input();
  cout<<"ENTER FLOAT VALUES  "<<endl;
  T2.input();
  cout<<"ENTER LONG VALUES  "<<endl;
  T3.input();
  clrscr();
  cout<<endl<<"INTEGER VALUES   "<<endl;
  T1.output();
  cout<<"TOTAL VALUE IS   "<<T1.total();
  cout<<endl<<"FLOAT VALUES  "<<endl;
  T2.output();
  cout<<"TOTAL VALUE IS   "<<T2.total();
  cout<<endl<<"LONG VALUES  "<<endl;
  T3.output();
  cout<<"TOTAL VALUE IS   "<<T3.total();
  getch();
}