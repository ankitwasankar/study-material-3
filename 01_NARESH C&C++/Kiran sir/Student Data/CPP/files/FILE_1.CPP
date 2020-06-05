#include <fstream.h>
#include <conio.h>
#include <string.h>
#define MAX 100

void main(void)
{
	clrscr();
	char fname[20];
	char data[MAX];
	ofstream f;
	cout <<"\nEnter the file name:   ";
	cin >> fname;
	f.open(fname);
	cout << "File opened sucessfully...!" << endl;
	cout << "\nEnter few lines....!" << endl;
	do
	{
		cin.getline(data,MAX);
		if(strcmp(data,"quit")==0)
		break;
		f << data;
		f << "\n";
	}while(1);
	cout << "\nLines written sucessfully";
	getch();
	f.close();
}