//HYBRID INHERITANCE EXAMPLE
#include<iostream.h>
#include<conio.h>


class super
{
	protected:int a;
	void input()
	{
	cout<<"enter the values of a :";
	cin>>a;
	 }
	 void output()
	 {
		cout<<"super a="<<a<<endl;
	 }
};


class sub1:public super
{
	protected:int b;
	void input1()
	{
	cout<<"enter the values of b :";
	cin>>b;
	 }
	  void output1()
	 {
		output();
		cout<<"sub1 b="<<b<<"\t";
	 }
};


class sub2:public sub1
{
	protected:int c;
	void input2()
	{
	cout<<"enter the values of c :";
	cin>>c;
	 }
	  void output2()
	 {
		output1();
		cout<<"sub2 c="<<c<<"\t";

	 }
};


class sub3:public sub1
{
	protected:int d;
	public:void input3()
	{
	input1();
	input();
	cout<<"enter the values of d :";
	cin>>d;
	}
	void output3()
	{
		output1();
		cout<<"sub3 d="<<d<<"\t";

	}
};


class sub4:public sub1
{
	protected:int e;
	public :void input4()
	{
	input1();
	input();
	cout<<"enter the values of e :";
	cin>>e;
	 }
	  void output4()
	 {
		output1();
		cout<<"sub4 e="<<e<<"\t";
	 }
};


class sub5:public sub2
{
	protected:int f;
	void input5()
	{
	cout<<"enter the values of f :";
	cin>>f;
	 }
	  void output5()
	 {
		output();
		output1();
		output2();
		cout<<"sub5 f="<<f<<"\t";

	 }
};


class sub6:public sub5
{
	int g;
	public:
	void input6()
	{
		input5();
		cout<<"enter the values of g :";
		cin>>g;
	 }
	  void output6()
	 {
		output();
		output1();
		output2();
		output5();
		cout<<"sub6 g="<<g;
	 }
};


void main()
{
	sub6 obj6;
	sub3 obj3;
	sub4 obj4;


	obj6.input6();
	obj3.input3();
	obj4.input4();
	clrscr();
	obj6.output6();
	obj3.output3();
	obj4.output4();
	getch();
}