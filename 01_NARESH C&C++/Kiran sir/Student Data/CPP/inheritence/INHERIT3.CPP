//EXAMPLE PROGRAM FOR MULTIPLE INHERITANCE AND PROTECTED
//MEMBERS
//TWO OR MORE BASE CLASSES ONE DERIVED CLASS IS CALLED
//MULTIPLE INHERITANCE
# include <iostream.h>
# include <conio.h>
class employ
{
 protected:
 int eno,bs;
 char name[20],eadd[20];
 public:
 void input()
 {
 cout<<"ENTER EMPLOY NUMBER, NAME, ADDRESS, BASIC SALARY  ";
   cin>>eno>>name>>eadd>>bs;
 }
};
class allowance
{
 protected:
 int da,hra,cca;
 public:
 void accept()
 {
   cout<<"ENTER DA, HRA, CCA   "<<endl;
   cin>>da>>hra>>cca;
 }
};
class deduction
{
 protected:
 int pf,it;
 public:
 void dedinput()
 {
   cout<<"ENTTER PF,IT   "<<endl;
   cin>>pf>>it;
 }
};
class salary : public employ,public allowance,
					public deduction
{
 int tall,tded,gs,ns;
 public:
 void calc_sal()
 {
   tall=da+hra+cca;
   tded=pf+it;
   gs=bs+tall;
   ns=gs-tded;
 }
 void output()
 {
  cout<<"EMPLOY NUMBER  "<<eno<<endl;
  cout<<"EMPLOY NAME  "<<name<<endl;
  cout<<"EMPLOY ADDRESS "<<eadd<<endl;
  cout<<"BASIC SALARY  "<<bs<<endl;

  cout<<"DA IS    "<<da<<endl;
  cout<<"HRA IS  "<<hra<<endl;
  cout<<"CCA IS  "<<cca<<endl;

  cout<<"PF IS  "<<pf<<endl;
  cout<<"IT  IS "<<it<<endl;

  cout<<"TOTAL ALLOWANCES  "<<tall<<endl;
  cout<<"TOTAL DEDUCTIONS  "<<tded<<endl;
  cout<<"GROSS SALARY IS "<<gs<<endl;
  cout<<"NET SALARY IS  "<<ns<<endl;
 }
};
void main()
{
  salary s;
  clrscr();
  s.input();		//MEMBER FUNCTION OF EMPLOY CLASS
  s.accept();		//MEMBER FUNCTION OF ALLOWANCE CLASS
  s.dedinput();		//MEMBER FUNCTION OF DEDUCTION CLASS
  clrscr();
  s.calc_sal();		//MEMBER FUNCTION OF SALARY CLASS
  s.output();
  getch();
}