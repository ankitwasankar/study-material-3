 #include<iostream.h>
 #include<conio.h>
class abc
{
protected:
int a,b,c;
void getdata()
{
cout<<"enter  a b c values";
cin>>a>>b>>c;
}
};
class def:public abc
{
public:void display()
{
		 getdata();
		 cout<<"a value is="<<a;
cout<<"b value is="<<b;
cout<<"c value is="<<c;
}
};
void main()
{
def obj;
obj.display();
getch();
}
