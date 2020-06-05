//Program to open a binary file for storing a set of numbers

#include <fstream.h>
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>

void main(void)
{
	ofstream out;
	char f[12];
	float f1,f2,t;
	clrscr();
	cout << "\nEnter any file name:  "; cin >> f;
	out.open(f,ios::out || ios::binary);
	f1 = 1.5;
	f2 = 10.5;
	cout << "f1              f1*f1" << endl;
	cout << "*********************" << endl;
	while(f1 < f2)
	{
		t=f1*f1;
		out << f1 << "\t\t" << t << endl;
		cout << f1 << "\t\t" << t << endl;
		f1 = f1 + 1.5;
	}
	out.close();
	getch();

}