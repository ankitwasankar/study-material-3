#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
  {
   private:
	   char name[20];
	   int rollno;
	   char sex;
   public:
	  student(char *na,long int rn,char sx);
	  void display();
	  class date
	      {
	       private:
		       int day;
		       int month;
		       int year;
	       public:
		       date(int dy,int mh,int yr);
		       void show_date();
	     };
    };
    student::student(char *na,long int rn,char sx)
		  {
		  strcpy(name,na);
		  rollno=rn;
		  sex=sx;
		  }
   student::date::date(int dy,int mh,int yr)
		{
		 day=dy;
		 month=mh;
		 year=yr;
		}

  void student::display()
  {
  cout<<"s_name\tsrno\tsex\tDOB\n";
  cout<<"____________________________________"<<endl;
  cout<<name<<"\t ";
  cout<<rollno<<"\t";
  cout<<sex<<"\t";
  }
  void student::date::show_date()
  {
  cout<<day<<'/'<<month<<'/'<<year<<endl;
  cout<<"_____________________________________";
  }
     void main()
     {
      student obj("hari",57,'m');
      student::date obj2(13,2,85);
      clrscr();
      obj.display();
      obj2.show_date();
      getch();
    }
