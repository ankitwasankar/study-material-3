//EXAMPLE PROGRAM FOR MULTI LEVEL INHERITANCE
//A DERIVED CLASS FROM ANOTHER DERIVED CLASS
# include <iostream.h>
# include <conio.h>
# include <string.h>
class student
{
 int sno;
 char name[10],sadd[10];
 public:
 void input()
 {
   cout<<"ENTER STUDENT NUMBER, NAME, ADDRESS  ";
   cin>>sno>>name>>sadd;
 }
 void output()
 {
   cout<<"STUDENT NUMBER IS  "<<sno<<endl;
   cout<<"STUDENT NAME IS  "<<name<<endl;
   cout<<"STUDENT ADDRESS IS  "<<sadd<<endl;
 }
};
class fees : public student
{
 int tf,fp,due;
 char course[10];
 public:
 void accept()
 {
   cout<<"ENTER COURSE, TOTAL FEES, FEES PAID   ";
   cin>>course>>tf>>fp;
   due=tf-fp;
 }
 void display()
 {
   cout<<"COURSE IS  "<<course<<endl;
   cout<<"TOTAL FEES  "<<tf<<endl;
   cout<<"FEES PAID  "<<fp<<endl;
   cout<<"DUE FEES  "<<due<<endl;
 }
};
class marks : public fees
{
  int mm,mp,mc,tm,am;
  char res[15];
  public:
  void marksin()
  {
	cout<<"ENTER MARKS IN MATHS, PHYSICS, CHEMISTRY  ";
	cin>>mm>>mp>>mc;
  }
  void resout()
  {
	tm=mm+mp+mc;
	am=tm/3;
	if(am>=75) strcpy(res,"DISTINCTION");
	else if(am>=60) strcpy(res,"FIRST CLASS");
	else if(am>=50) strcpy(res,"SECOND CLASS");
	else if(am>=35) strcpy(res,"THIRD CLASS");
	else strcpy(res,"FAILED ");
	cout<<"MARKS IN MATHS   "<<mm<<endl;
	cout<<"MARKS IN PHYSICS  "<<mp<<endl;
	cout<<"MARKS IN CHEMISTRY  "<<mc<<endl;
	cout<<"TOTAL MARKS  "<<tm<<endl;
	cout<<"AVERAGE MARKS  "<<am<<endl;
	cout<<"RESULT IS  "<<res<<endl;
  }
};
void main()
{
 marks obj;
 clrscr();
 obj.input();		//MEMBER FUNCTION OF STUDENT CLASS
 obj.accept();		//MEMBER FUNCTION OF FEES CLASS
 obj.marksin();		//MEMBER FUNCTION OF MARKS CLASS
 clrscr();
 obj.output();		//MEMBER FUNCTION OF STUDENT CLASS
 obj.display();		//MEMBER FUNCTION OF FEES CLASS
 obj.resout();		//MEMBER FUNCTION OF MARKS CLASS
 getch();
}

