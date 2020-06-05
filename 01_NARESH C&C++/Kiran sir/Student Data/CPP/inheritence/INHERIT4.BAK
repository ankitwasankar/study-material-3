// HIERARCHICAL INHERITANCE
# include <iostream.h>
# include <conio.h>
class student
{
 int sno;
 char name[20],add[20];
 public:
 void input()
 {
   cout<<"ENTER STUDENT NUMBER, NAME, ADD  ";
   cin>>sno>>name>>add;
 }
 void output()
 {
   cout<<"STUDENT NUMBER  "<<sno<<endl;
   cout<<"STUDENT NAME   "<<name<<endl;
   cout<<"STUDENT ADDRESS  "<<add<<endl;
 }
};
class language : public student
{
 int mt,me;
 public:
 void accept()
 {
   cout<<"ENTER MARKS IN TELUGU AND ENGLISH  ";
   cin>>mt>>me;
 }
 void display()
 {
   cout<<"MARKS IN TELUGU  "<<mt<<endl;
   cout<<"MARKS IN ENGLISH  "<<me<<endl;
 }
};
class commerce : public language
{
 int mc,me,mci;
 public:
 void sentry()
 {
   cout<<"ENTER MARKS IN COMMERCE, ECONOMICS, AND CIVICS  ";
   cin>>mc>>me>>mci;
 }
 void sprint()
 {
   cout<<"MARKS IN COMMERCE   "<<mc<<endl;
   cout<<"MARKS IN ECONOMICS  "<<me<<endl;
   cout<<"MARKS IN CIVICS  "<<mci<<endl;
   cout<<"TOTAL MARKS   "<<mc+me+mci;
 }
};
class science : public language
{
 int mm,mp,mc;
 public:
 void sentry()
 {
   cout<<"ENTER MARKS IN MATHS, PHYSICS, AND CHEMISTRY  ";
   cin>>mm>>mp>>mc;
  }
 void sprint()
 {
   cout<<"MARKS IN MATHS  "<<mm<<endl;
   cout<<"MARKS IN PHYSICS  "<<mp<<endl;
   cout<<"MARKS IN CHEMISTRY  "<<mc<<endl;
   cout<<"TOTAL MARKS   "<<mm+mp+mc;
 }
};
class arts : public language
{
 int mh,me,mc;
 public:
 void sentry()
 {
   cout<<"ENTER HISTORY, ECONOMICS, CIVICS MARKS  "<<endl;
   cin>>mh>>me>>mc;
 }
 void sprint()
 {
   cout<<"MARKS IN HISTORY  "<<mh<<endl;
   cout<<"MARKS IN ECONOMICS  "<<me<<endl;
   cout<<"MARKS IN CIVICS  "<<mc<<endl;
   cout<<"TOTAL MARKS   "<<mh+me+mc;
 }
};
void main()
{
 commerce C;
 science S;
 arts A;

 clrscr();
 C.input();
 C.accept();
 C.sentry();

 clrscr();
 S.input();
 S.accept();
 S.sentry();

 clrscr();
 A.input();
 A.accept();
 A.sentry();

 clrscr();
 C.output();
 C.display();
 C.sprint();
 getch();

 clrscr();
 S.output();
 S.display();
 S.sprint();
 getch();

 clrscr();
 A.output();
 A.display();
 A.sprint();
 getch();
}
