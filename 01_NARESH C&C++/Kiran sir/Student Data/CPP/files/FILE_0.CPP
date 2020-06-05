/*
	A file is a collection of related data stored in a particular
	area on the disk.

	A program typically involves either or both of the following
	kinds of data communication:

	1. Data transfer between the console unit and the program
	2. Data transfer between the program and a disk file.

	File stream classes
	-------------------
	filebuf-> Its is used to set the file buffers to read and write.

	fstreambase-> Provides operations common to the file streams.
			  Serves as a base for fstream,ifstream and ofstream
			  classes.
	ifstream-> Provides input operations.Contains open() with default
		   input mode. Inherits the functions get(),
		   getline(),read(),seekg() and tellg() functions from
		   istream.
	ofstream-> Provides output operations. Contains open() with
		   default output mode. Inherits put(), seekp(),
		   tellp(), and write() functions from ostream.
	fstream-> Provides support for simultaneous input and output
		  operations Contains open() with default input mode.
		  Inherits all the functions from istream and ostream
		  classes through iostream.

	List of member functions used as file attributes for the various
	kinds of file opening operation:

	Name of member function       	Meaning

	ios::in                         open a file for reading
	ios::out						open a file for writing
	ios::app                        append at the end of a file
	ios::ate                        seek to the end of a file upon
									opening instead of beginning.
	ios::trunc						delete a file if it exists and
									recreate it
	ios::nocreate                   open a file if a file does not exist
	ios::replace                    open a file if a file does exist
	ios::binary						open a file for binary mode;default
									is text.
*/

/*Write a program to create a file and write few lines to the file using
insertion operator*/

#include <fstream.h>
#include <conio.h>

void main()
{
	clrscr();
	char fname[20];
	ofstream f;
	cout << "\nEnter the file name:   ";
	cin >> fname;
	f.open(fname);
	cout << "File opened sucessfully...!" << endl;
	f << "Have a good day\n";
	f << "Thank u\n";
	f << "Welcome\n";
	cout << "\nLines written sucessfully";
	getch();
	f.close();      
}