/*
A program to supress the white spaces
*/

#include <iostream.h>
#include <fstream.h>
#include <process.h>
#include <conio.h>

void main(int argc, char *argv[])
{
	clrscr();
	char ch;
	ofstream out;
	ifstream in,tmp;

	if(argc != 3)
	{
		cout << "\nWrong no of command line arguments...!";
		getch();
		exit(0);
	}
	in.open(argv[1]);
	if(in.fail())
	{
		cerr << "\nSource file not exists....!";
		getch();
		exit(0);
	}
	tmp.open(argv[2]);
	if(!tmp.fail())
	{
		cerr << "\nTarget file exists.....!";
		getch();
		exit(0);
	}
	out.open(argv[2]);
	while(!in.eof())
	{
		ch=in.get();
		if(ch!=' ' && ch!='\t' && ch!='\n')
		out.put(ch);
	}
	in.close();
	out.close();
	cout << "\nOver...!" << endl;
	getch();
}