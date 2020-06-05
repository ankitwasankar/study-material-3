 #include<fstream.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 char fname[20];
 ofstream f;
 cout<<"\n enter the file name:";
 cin>>fname;
 f.open(fname);
 cout<<"file opened sucsssfully...!"<<endl;
 f<<"have a good day\n";
 f<<"thanku\n";
 f<<"welcome \n";
 cout<<"\n lines written sucessfully";
 getch();
 f.close();
 }