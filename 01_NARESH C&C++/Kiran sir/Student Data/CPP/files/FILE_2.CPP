		/* reading the information from a file */
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
void main(void)
{
	clrscr();
	ifstream in;
	char fname[10];
	char ch;
	cout << "\nEnter any file name:  ";
	cin >> fname;
	in.open(fname);
	if(in.fail())
	{
		cerr << "\nNo such file exists....!\n";
		getch();
		exit(1);
	}
	while(!in.eof())
	{
		ch=(char)in.get();
		cout << ch;
		//delay(500);
	}
	in.close();
	getch();
}