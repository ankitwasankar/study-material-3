/*
Using structure write any no of records to a data file and read the records
to display on standard output
*/
#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <string.h>
#include <iomanip.h>
#define MAX 200
struct employee
{
	int eno;
	char ename[20],job[15];
	float sal,comm,np;
};
struct employee e[MAX];
void main(void)
{
	clrscr();
	fstream f;
	char fname[15];
	int i,n;
	cout << "\nEnter the filename:  ";
	cin >> fname;
	cout << "\nHow many records:   ";
	cin >> n;
	cout << "\nEnter the employee information...!" << endl;
	for(i=0;i<n;i++)
	{
		cout << endl << "Record:   " << (i+1) << endl;
		cout << "Empno:      ";
		cin >> e[i].eno;
		cout << "Name:       ";
		cin >> e[i].ename;
		cout << "Job:        ";
		cin >> e[i].job;
		cout << "Salary:     ";
		cin >> e[i].sal;
		if(strcmp(e[i].job,"Manager")==0)
		e[i].comm = 0;
		else
		e[i].comm=e[i].sal * (float).14;

		e[i].np=e[i].sal + e[i].comm;
	}
	cout << "\nWriting to the file.....!";
	f.open(fname,ios::out);
	for(i=0;i<n;i++)
	{
		f << e[i].eno << setw(20) << e[i].ename <<
		setw(15) << e[i].job << setprecision(3) << setw(10) <<
		e[i].sal << setprecision(3) << setw(10) <<
		 e[i].comm << setprecision(3) << setw(10) << e[i].np << endl;
	}
	f.close();
	clrscr();
	cout << "Employee list.....!" << endl;
	f.open(fname,ios::in);
	i=0;
	while(!f.eof())
	{
		f >> e[i].eno >> setw(20) >> e[i].ename >> setw(15) >>
		e[i].job >> setw(10) >> e[i].sal >> setw(10) >> e[i].comm >>
		setw(10) >> e[i].np;
		++i;
	}
	for(i=0;i<n;i++)
	{
		cout << (i+1) << ". " << e[i].eno << setw(20) <<
		e[i].ename << setw(15) <<
		e[i].job << setprecision(3) << setw(10) << e[i].sal <<
		setprecision(3) << setw(10) << e[i].comm << setw(10) <<
		setprecision(3) << e[i].np << endl;
	}
	f.close();
	getch();
}