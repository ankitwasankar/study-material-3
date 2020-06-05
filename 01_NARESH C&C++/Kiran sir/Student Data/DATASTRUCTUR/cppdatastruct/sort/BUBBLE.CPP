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
    int i,j,tmp,limit;
    limit=n-1;
    for(i=0;i<n-1;i++)
    for(j=0;j<limit-i;j++)
    if(a[j+1]<a[j])
    {
      tmp=a[j+1];
      a[j+1]=a[j];
      a[j]=tmp;
    }
  }
};
void main()
{
  clrscr();
  sorting s;
  s.accept();
  cout<<"The values before sortig  "<<endl;
  s.print();
  s.sort();
  cout<<"The values after sorting  "<<endl;
  s.print();
  getch();
}