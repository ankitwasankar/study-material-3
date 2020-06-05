//Using read() member function

#include <fstream.h>
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
#include <string.h>
#define MAX 200

class Employee
{
	protected:
		int eno;
		char ename[20],job[15];
		float sal,comm,np;
	public:
		void dispData();
};

void Employee :: dispData()
{
	cout << endl << "No:            " << eno << endl;
	cout << "Name:          " << ename << endl;
	cout << "Job:           " << job << endl;
	cout << "Salary:        " << setprecision(3) << sal << endl;
	cout << "Comission:     " << setprecision(3) << comm << endl;
	cout << "Netpay:        " << setprecision(3) << np << endl;
}

void main(void)
{
	clrscr();
	char fname[12];
	int j;
	Employee e[MAX];
	ifstream f;
	cout << "\nEnter the file name:     ";
	cin >> fname;

	//Reading the records from the file using read() member function
	f.open(fname);
	cout << "\nEmployee list....!\n";
	j=0;
	while(1)
	{
		f.read((char *) &e[j],sizeof(e[j]));
		if(f.eof())
		break;
		e[j].dispData();
		getch();
		j++;
	}
	getch();
	f.close();
}