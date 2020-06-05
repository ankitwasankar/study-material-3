
#include <fstream.h>
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
#include <string.h>
#define MAX 20

class Employee
{
	protected:
		int eno;
		char ename[20],job[15];
		double sal,comm,np;
	public:
		Employee()
		{
			comm=0;
			np=0;
		}
		void getData();
		void dispData();
		void findComm();
		void findNp();
};

void Employee :: getData()
{
	cout << "Eployee no:      "; cin >> eno;
	cout << "Employee name:   "; cin >> ename;
	cout << "Employee job:    "; cin >> job;
	cout << "Employee sal:    "; cin >> sal;
}

void Employee :: dispData()
{
	cout << "No:            " << eno << endl;
	cout << "Name:          " << ename << endl;
	cout << "Job:           " << job << endl;
	cout << "Salary:        " << setprecision(3) << sal << endl;
	cout << "Comission:     " << setprecision(3) << comm << endl;
	cout << "Netpay:        " << setprecision(3) << np << endl;
}

void Employee :: findComm()
{
	if(strcmp(job,"Manager")==0)
	   comm=0;
	else
	   comm=sal * float(0.12);
}

void Employee :: findNp()
{
	np = sal + comm;
}

void main()
{
	clrscr();
	char fname[12];
	int n,i;
	Employee e[MAX];
	fstream f;
	cout << "\nEnter the file name:     ";
	cin >> fname;
	f.open(fname,ios::in,ios::out);
	cout << "\nEnter no of records:   ";
	cin >> n;

	cout << "\nEnter the employees information..!\n";
	for(i=0; i<n; i++)
	{
		cout << endl << "Record:  " << (i+1) << endl;
		e[i].getData();
		e[i].findComm();
		e[i].findNp();
	}
	f.open(fname,ios::out);
	cout << "\nWriting to the file....!\n";
	for(i=0;i<n;i++)
	{
		f.write((char *) &e[i],sizeof(e[i]));
	}
	cout << endl << n << " Records written sucessfully....!";
	f.close();
	clrscr();
	//Reading the records from the file using read() member function
	f.open(fname,ios::in);
	cout << "\nEmployee list....!\n" << endl;
	for(i=0;i<n;i++)
	{
		f.read((char *) &e[i],sizeof(e[i]));
		if(f.eof())
		break;
		e[i].dispData();
		cout << endl;
		getch();
	}
	f.close();
	getch();
}
#include <fstream.h>
#include <iomanip.h>
#include <conio.h>

class Student
{
	private:
		int rno;
		char sname[20],course[15];
		double cf;
	public:
		void getData(void)
		{
			cout << "Enter roll no:    "; cin >> rno;
			cout << "Enter name:       "; cin >> sname;
			cout << "Enter course:     "; cin >> course;
			cout << "Enter fees:       "; cin >> cf;
		}
		void dispData(void)
		{
			cout << setw(10) << rno
			<< setw(15) << sname
			<< setw(10) << course
			<< setprecision(3) << setw(10) << cf << endl;
		}
};

void main(void)
{
	Student s;
	fstream f;
	clrscr();
	f.open("Student.dat",ios :: ate | ios :: in | ios :: out |
			ios :: binary);
	f.seekg(0,ios::beg);  //go to start
	cout << "\nCurrent student details.....!" << endl;
	while(f.read((char *) &s, sizeof(s)))
	{
		s.dispData();
	}
	f.clear();   //Turn off EOF flag

	//Adding one more record

	cout << "\nInput data for one more student...!\n";
	s.getData();
	f.write((char *) &s,sizeof s);

	//Display the appended file

	f.seekg(0);   //go to the start

	cout << "\nContents of the student file\n";
	while(f.read((char *) &s,sizeof s))
	{
		s.dispData();
	}

	//Find number of records in the file

	int last = f.tellg();
	int n = last / sizeof(s);
	cout << "\nNo of records:  " << n << endl;
	cout << "\nTotal bytes in the file:  " << last << endl;

	//Edit an existing student record

	cout << "\nEnter record no to be updated: ";
	int rn;
	cin >> rn;

	int loc = (rn - 1) * sizeof(s);

	if(f.eof()) f.clear();
	f.seekp(loc);
	cout << "\nEnter new values for the record \n";
	s.getData();
	f.write((char *) &s,sizeof s) << flush;

	//Displaying updated file

	f.seekg(0);
	cout << "\nContents of updated file\n";
	while(f.read((char *) &s, sizeof s))
	{
		s.dispData();
	}
	f.close();
	getch();
}