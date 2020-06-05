#include<iostream.h>
#include<conio.h>
class prm
{
int n,c,i;
public:int prim()
{
cout<<"enter the n value"<<endl;
cin>>n;
c=0;
for(i=1;i<n;i++)
{
if(n%i==0)
c++;
}
return(c);
}
};
void main()
{
prm obj;
if(obj.prim())
cout<<"yes";
else
cout<<"no";
getch();
}