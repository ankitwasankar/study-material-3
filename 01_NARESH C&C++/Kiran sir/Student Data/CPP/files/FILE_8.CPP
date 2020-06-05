/*
Program to read class object of employee from the key board and to
store it on a specified file using write() member functions finally
reading all objects using read() member function

write((char *) &objectname,sizeof(objectname))
read((char *) &objectname,sizeof(objectname))
*/

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