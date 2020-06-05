
#include<iostream.h>
#include<conio.h>
void main()
{
  int n,a[100],k,j,i,temp;
  clrscr();
  cout<<"Enter n value";
cin>>n;
cout<<"Enter array elements";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(k=1;k<n;k++)
{
 temp=a[k];
j=k-1;
while((temp<a[j])&&(j>=0))
{
  a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}

for(i=0;i<n;i++)
{
  cout<<a[i];
}
getch();
}