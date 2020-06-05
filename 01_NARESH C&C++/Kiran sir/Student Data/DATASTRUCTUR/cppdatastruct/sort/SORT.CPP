# include <iostream.h>
# include <conio.h>
class sorting
{
  int a[100],n;
  public:
  void accept()
  {
    cout<<"ENTER N VALUE  ";
    cin>>n;

	for(int i=0;i<n;i++)
	{
	   cout<<"ENTER  "<<i<<" Value  ";
	   cin>>a[i];
	}
  }
  void print()
  {
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
  }
  void sort()
  {
	int i,j,tmp;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(a[j]<a[i])
	{
	  tmp=a[i];
	  a[i]=a[j];
	  a[j]=tmp;
	}
  }
};
void main()
{
  sorting s;
  s.accept();
  cout<<"The values before sortig  "<<endl;
  s.print();
  s.sort();
  cout<<"The values after sorting  "<<endl;
  s.print();
  getch();
}









