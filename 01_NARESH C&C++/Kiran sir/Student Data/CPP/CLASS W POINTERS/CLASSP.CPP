/*  This progream gives example of classes using pointers*/

#include<iostream.h>
#include<conio.h>
class student
	{
	 private:
		 int r_number;
		 char sex;
		 int age;
		 float height;
		 float weight;
	 public:
		void getdata()
		{
		cout<<"Enter r_number\t";
		cin>>r_number;
		cout<<endl;
		cout<<"Enter sex\t";
		cin>>sex;
		cout<<endl;
		cout<<"Enter age\t";
		cin>>age;
		cout<<endl;
		cout<<"Enter height\t";
		cin>>height;
		cout<<endl;
		cout<<"Enter weight\t";
		cin>>weight;
		cout<<endl<<endl;
		}

		void display()
		{
		cout<<"r_number"<<"\t"<<r_number<<endl<<endl;
		cout<<"sex"<<"\t\t"<<sex<<endl<<endl;
		cout<<"age"<<"\t\t"<<age<<endl<<endl;
		cout<<"height"<<"\t\t"<<height<<endl<<endl;
		cout<<"weight"<<"\t\t"<<weight<<endl<<endl;
		}
	};

	void main()
	{
	 student *obj;
	 int i,j,n;
	 clrscr();
	 cout<<"enter how many students"<<endl<<endl;
	 cin>>n;
	 cout<<"Enter information "<<endl<<endl;
	 for(i=0;i<=n-1;++i)
	 {
	  j=i;
	  j=j+1;
	  cout<<"RECORD NO\t"<<j<<endl<<endl;
	  obj->getdata();
	 }
	 for(i=0;i<=n-1;++i)
	 {
	  j=i;
	  cout<<"RECORD NO\t"<<j+1<<endl<<endl;
	  obj->display();
	 }
	 getch();
	}
