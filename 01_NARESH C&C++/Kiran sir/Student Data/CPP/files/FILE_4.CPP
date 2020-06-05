	/*
A program to copy the file contents of one file to another using
		    command line arguments
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
	tmp.open (argv[2]);
	if(!tmp.fail())
	{
		cerr << "\nTarget file exists.....!";
		getch();
		exit(0);
	}
	out.open(argv[2]);
	long int nc=0;
	while(!in.eof())
	{
		ch=in.get();
		out.put(ch);
		nc=nc+1;
	}
	in.close();
	out.close();
	cout << "\nCopied sucessfully....!" << endl;
	cout << "\nNo of characters written is:  "<< nc << endl;
	getch();
}