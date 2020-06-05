//Program to open a binary file for reading numbers

#include <fstream.h>
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>

void main(void)
{
	ifstream in;
	char f[12];
	float f1,t;
	clrscr();
	cout << "\nEnter any file name:  "; cin >> f;
	in.open(f,ios::in || ios::binary);
	cout << "f1              f1*f1" << endl;
	cout << "*********************" << endl;
	while(1)
	{
		in >> f1 >> t;
		if(in.eof())
		break;
		cout << f1 << "\t\t" << t << endl;
	}
	in.close();
	getch();
}