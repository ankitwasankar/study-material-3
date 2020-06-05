#include<iostream.h>
#include<conio.h>
class bankacc
    {
    float bal,ra;
    public:
	   bankacc();
	   void deposit();
	   void wihdraw();
	   void compound();
	   void getbalance();
	   void menu();
    }

    bankacc::bankacc()
    {
     cout<<"Enter initial amount =\t";
     cin>>bal;
     cout<<"\n";
     cout<<"Inrest rate =\t\t";
     cin>>ra;
     }

     void bankacc::deposit()
     {
     float amt;
     cout<<"Enter amount =\t";
     cin>>amt;
     bal=bal+amt;
     }




